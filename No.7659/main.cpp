// baekjoon 7569

#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


int arr[101][101][101];
//bool visited[101][101][101] ;

int dir[6][3] = {{1,0,0}, {0,1,0}, {-1,0,0}, {0,-1,0}, {0,0,1}, {0,0,-1}};

int M, N, H;
queue<pair<pair<int, int>,int>> q;


// BFS
void bfs(){
    int count = 0;
    while (!q.empty()) {
        int size = q.size();
        count++;
        
        for(int i = 0; i < size; i++){
            int x = q.front().first.first;
            int y = q.front().first.second;
            int z = q.front().second;
            
            q.pop();
            
            for(int j = 0; j < 6; j++){
                int nx = x + dir[j][0];
                int ny = y + dir[j][1];
                int nz = z + dir[j][2];
                
                if((nx >= 0 && nx < M) && (ny >= 0 && ny < N) && (nz >= 0 && nz < H) && arr[nz][ny][nx] == 0){
                    q.push({{nx, ny}, nz});
                    arr[nz][ny][nx] = 1;
                }
            }
        }
    }
    
    for(int i = 0; i < H; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                if(arr[i][j][k] == 0){
                    cout << -1;
                    return;
                }
            }
        }
    }
    
    cout << count - 1;
}


// 배열, 방문여부, 큐 초기화
/*
void reset(){
}
*/

int main(){
    init();
    
    cin >> M >> N >> H;
    
    for(int i = 0; i < H; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                cin >> arr[i][j][k];
                
                if(arr[i][j][k] == 1){
                    q.push({{k,j},i});
                }
            }
        }
    }
    bfs();
}


