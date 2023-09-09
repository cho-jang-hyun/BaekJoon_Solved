// baekjoon 13549

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


int arr[100001];
//bool visited[101][101][101] ;

//int dir[6][3] ;

int N, K;
queue<int> q;

int min_ = 100000;

// BFS
void bfs(){
    q.push(N);
    arr[N] = 0;
    
    while (!q.empty()) {
        auto current = q.front();
        q.pop();
        
        if(current == K){
            min_ = arr[current];
            return;
        }
        
        if(current * 2 < 100001 && arr[current * 2] > arr[current]){
            arr[current * 2] = arr[current];
            q.push(current * 2);
        }
        
        if(current + 1 <100001 && arr[current + 1] > arr[current] + 1){
            arr[current + 1] = arr[current] + 1;
            q.push(current + 1);
        }
        if(current - 1 >= 0 && arr[current - 1] > arr[current] + 1){
            arr[current - 1] = arr[current] + 1;
            q.push(current - 1);
        }
    }
}


// 배열, 방문여부, 큐 초기화
/*
void reset(){
}
*/

int main(){
    init();
    
    cin >> N >> K;
    
    for(int i = 0; i < 100001; i++){
        arr[i] = 100000;
    }
    
    bfs();
    
    cout << min_;
    return 0;
}


