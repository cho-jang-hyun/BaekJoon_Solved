// baekjoon 4796

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
    
    int l = 1, p = 1, v = 1;
    
    
    int i = 0;
    int day = 0;
    
    while (1) {
        cin >> l >> p >> v;
        if(l == 0 && p == 0 && v == 0)
            break;
        day = 0;
        day += (v / p) * l;
        
        if(v % p > l){
            day += l;
        }
        else{
            day += v % p;
        }
        
        i++;
        cout << "Case " << i << ": " << day <<  '\n';
    }
    
}


