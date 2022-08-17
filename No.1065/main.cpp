#include <iostream>

using namespace std;



int main(){
    
    int n;
    cin >> n;
    
    int count = 0;
    
    if ((n>=0) && (n<100)) {
        count = n;
    }
    
    else if ((n>=100) && (n<=1000)){
        count = 99;
        
        int fisrt, second, third;
        while (n > 100) {
            fisrt = n / 100;
            second = (n / 10) % 10;
            third = n % 10;
            if ((fisrt - second) == (second - third)){
                count++;
            }
            n--;
        }
    }
    cout << count;
    
}
