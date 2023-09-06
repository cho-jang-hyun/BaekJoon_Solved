// baekjoon 1012

#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int arr[51][51];
bool visited[51][51] ;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int N, M, cabbage;

bool dfs(int current_y, int current_x){
    
    if(visited[current_y][current_x]){
        return false;
    }
    
    visited[current_y][current_x] = true;
    
    for(int i = 0; i < 4; i++){
        int next_y = current_y + dy[i];
        int next_x = current_x + dx[i];
        
        if((next_y >= 0 && next_x >= 0) && (next_y < N && next_x < M) && arr[next_y][next_x]){
            dfs(next_y, next_x);
        }
    }
    return true;
}


int main(){
    init();
    
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> M >> N >> cabbage;
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                arr[i][j] = 0;
                visited[i][j] = false;
            }
        }
        
        for(int j = 0; j < cabbage; j++){
            int x, y;
            cin >> x >> y;
            arr[y][x] = 1;
        }
        
        int count = 0;
        
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                if(arr[j][k] && !visited[j][k]){
                    if(dfs(j, k)){
                        count++;
                    }
                }
            }
        }
        
        cout << count << '\n';
    }
}


