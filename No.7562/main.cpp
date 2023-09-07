// baekjoon 7562

#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


int arr[301][301];
bool visited[301][301] ;

int dx[8] = {2,1,-1,-2,-2,-1,1,2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};

int L, start_x, start_y, arrive_x, arrive_y;
queue<pair<int, int>> q;


// BFS
void bfs(int cur_x, int cur_y){
    q.push({cur_x, cur_y});
    visited[cur_x][cur_y] = true;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(x == arrive_x && y == arrive_y){
            cout << arr[x][y] << '\n';
            while (!q.empty()) {
                q.pop();
            }
            break;
        }
        
        for(int i = 0; i < 8; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if((0 <= nx && 0 <= ny) && (nx < L && ny < L) && !visited[nx][ny]){
                q.push({nx, ny});
                visited[nx][ny] = true;
                arr[nx][ny] = arr[x][y] + 1;
            }
        }
    }
    
}


// 배열, 방문여부, 큐 초기화
void reset(){
    while (!q.empty()) {
        q.pop();
    }
    for(int i = 0; i < 301; i++){
        for(int j = 0; j < 301; j++){
            arr[i][j] = 0;
            visited[i][j] = false;
        }
    }
    
}


int main(){
    init();
    
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> L;
        cin >> start_x >> start_y;
        cin >> arrive_x >> arrive_y;
        
        bfs(start_x, start_y);
        reset();
    }
    
}


