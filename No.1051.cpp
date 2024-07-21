// baekjoon 1051

#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}
int main(){
    int N, M;
    cin >> N >> M;
    
    int min;
    if (N < M) {
        min = N;
    }
    else{
        min = M;
    }
    
    if (N > 50 && M > 50){
        return 0;
    }
    
    int a[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%1d",&a[i][j]);
        }
    }
    
    int max_size = 1;
    //int idx_i = 0;
    //int idx_j = 0;
    for(int length = 1; length < min; length++){
        for(int idx_i = 0; idx_i < N - length; idx_i++){
            for(int idx_j = 0; idx_j < M - length; idx_j++){
                if(a[idx_i][idx_j] == a[idx_i + length][idx_j + length] &&
                   a[idx_i][idx_j + length] == a[idx_i + length][idx_j] &&
                   a[idx_i][idx_j] == a[idx_i + length][idx_j]){
                    max_size = pow(length + 1, 2);
                }
            }
        }
    }
    cout << max_size;
}
