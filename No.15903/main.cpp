// baekjoon 15903

#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>


using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


int main(){
    init();
    
    int n, m;
    
    cin >> n >> m;
    
    long long int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    long long int temp;
    for(int i = 0; i < m; i++){
        sort(arr, arr + n);
        temp = arr[0];
        arr[0] += arr[1];
        arr[1] += temp;
    }
    
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    cout << sum;
    
}


