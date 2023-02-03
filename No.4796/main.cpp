// baekjoon 4796

#include<iostream>

using namespace std;

int main(){
    
    int l, p , v;
    int i = 0;

    while (true) {
        i += 1;
        cin >> l >> p >> v;
        if ((l==0) && (p==0) && (v==0))
            break;
        int m = v / p;
        int r = (v % p);
        if (r > l){
            r = l;
        }
        cout << "Case " << i <<": " << l * m + r << '\n';
        }
    
}
   

    

