// baekjoon 4307

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
    
    int n;
    cin >> n;
    
    int l, ant;
    
    
    for(int i = 0; i < n; i++){
        cin >> l >> ant;
        
        int min_count = 0;
        int max_count= 0;
        
        //int loc[ant];
        for(int j = 0; j < ant; j++){
            int loc;
            cin >> loc;
            int short_count = min(loc, l - loc);
            int long_count = max(loc, l - loc);
            min_count = max(short_count, min_count);
            max_count = max(long_count, max_count);
        }
        cout << min_count << " " << max_count << "\n";
    }
    
    
}


