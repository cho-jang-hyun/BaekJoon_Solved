// baekjoon 2805

#include<iostream>
#include<algorithm>

using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


int main(){
    init();
    long long n;
    cin >> n;
    
    long long input;
    cin >> input;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+ n);
    
    long long left = 0;
    long long right = arr[n - 1];
    long long mid;
    long long sum = 0;
    long long max = 0;
    
    while(left <= right){
            sum = 0;
            mid = (left + right) / 2;

            for(int i = 0 ; i < n ; i++){
                if(arr[i] - mid > 0){
                    sum += arr[i] - mid;
                }
            }

            if(sum >= input){
                left = mid + 1;
                
                if(mid > max){
                    max = mid;
                }
            }
            else{
                right = mid - 1;
            }
        }
    
   
    cout << max;
}
    
/*
 
 int sum = 0;
 int max = arr[0];
 for(int i = arr[0]; i > 0; i--){
     for(int j = 0; j < n; j++){
         if (arr[j] < i){
             break;
         }
         sum += arr[j] / i;
     }
     max--;
     
     if(sum >= input){
         break;
     }
 }
*/
