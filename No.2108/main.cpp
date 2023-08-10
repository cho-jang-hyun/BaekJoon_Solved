// baekjoon 2108

#include<iostream>
#include<algorithm>
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
    
    int n;
    cin >> n;
    
    int arr[500001];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    
    // 산술 평균
    double mean1 = 0;
    
    
    // 최빈값
    int count = 0;
    int ans = 0;
    int temp = arr[0];
    int mean3 = arr[0];
    bool second = false;
    
    
    for(int i = 0; i < n; i++){
        // 산술 평균
        mean1 += arr[i];
        
        // 최빈값
        if(temp == arr[i]){
            count++;
        }
        
        else{
            if(ans < count){
                ans = count;
                mean3 = arr[i - 1];
                second = false;
            }
            else if (ans == count && !second){
                mean3 = arr[i - 1];
                second = true;
            }
            count = 1;
            temp = arr[i];
        }
        
        if(ans < count){
            mean3 = arr[n - 1];
        }
        else if (ans == count && !second){
            mean3 = arr[n - 1];
        }
        
    }
    
    
    cout << int(round(mean1 / n)) << '\n';
    cout << arr[n/2] << '\n';
    cout << mean3 << '\n';
    cout << (arr[n-1] - arr[0]) << '\n';
    
}


