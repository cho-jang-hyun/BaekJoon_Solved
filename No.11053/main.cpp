// baekjoon 11053

#include<iostream>
#include<algorithm>
using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int MAX = 1001;

int main(){
    init();
    
    int N;
    cin >> N;
    
    int count = 0;
    int arr[MAX];
    int dp[MAX];
    
    
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    
    for(int i = 1; i <= N; i++){
        dp[i] = 1;
        for(int j = i - 1; j >= 1; j--){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        count = max(dp[i], count);
    }
    cout << count;
    
    return 0;
}
