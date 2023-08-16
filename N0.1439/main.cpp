// baekjoon 1439

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
    
    int temp = input[0];
    int n = input.length();
    
    int switching = 0;
    
    for(int i = 1; i < n; i++){
        if (input[i] != temp) {
            switching++;
        }
        temp = input[i];
    }
    
    cout << (switching + 1) / 2;
}


