// baekjoon 2204

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
    
    int n ;
    string first;
    string first_temp;
    
    while(true){
        
        cin >> n;
        if(n == 0){
            break;
        }
        
        first = "zzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        string input;
        
        for(int i = 0; i < n; i++){
            cin >> input;
            string temp = input;
            first_temp = first;
            
            for(int j = 0; j < input.size(); j++){
                temp[j] = toupper(input[j]);
            }
            
            for(int j = 0; j < first.size(); j++){
                first_temp[j] = toupper(first[j]);
            }
            
            if(first_temp > temp){
                first = input;
            }
            
        }
        cout << first << '\n';
    }
    
    return 0;
}


