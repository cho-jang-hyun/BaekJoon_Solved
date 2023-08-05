// baekjoon 2003

#include<iostream>
#include<algorithm>

using namespace std;

// codes for fast I/O
/*void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}*/

int main(){
    int n;
    cin >> n;
    
    int input;
    cin >> input;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int count = 0;
    
    for(int j = 0; j < n; j++){
        int sum = 0;
        
        for(int i = j; i < n; i++){
            sum += arr[i];
            if (sum == input){
               count++;
               break;
            }
            else if(sum > input){
                break;
            }
            
        }
    }
    cout << count;
}
    

