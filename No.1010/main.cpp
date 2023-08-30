// baekjoon 1010

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
    
    int t;
    cin >> t;
    
    int n, m;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        
        int ans =  1;
        for(int j = 0; j < n; j++){
            ans *= (m - j);
            ans /= (1 + j);
        }
        
        cout << ans << '\n';
    }
    
    
}


