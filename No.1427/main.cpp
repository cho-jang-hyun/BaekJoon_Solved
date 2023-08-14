// baekjoon 1427

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


int main(){
    init();
    
    string input;
    cin >> input;
       
    unsigned long len = input.length();
    char arr[len];
    
    for(int i = 0; i < len; i++){
        arr[i] = input[i];
    }
    
    sort(arr, arr+len,greater<>());
    
    for(int i = 0; i < len; i++){
        cout << arr[i];
    }
    
    
}


