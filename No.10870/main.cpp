#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    /*
    int n1 = 0; // 0 1 1 2
    int n2 = 1; // 1 1 2 3
    int sum = 0; //1 2 3 5
    if ((n <= 20) && (n > 0)){
        for (int i = 0; i< n - 1; i++){
            sum = n1 + n2;
            n1 = n2;
            n2 = sum;
        }
        cout << n2;
    }
    else if (n == 0){
        cout << 0;
    }*/
    
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    int num;
    for (int i = 2; i < n + 1; i++){
        num = fib[i-1] + fib[i-2];
        fib[i] = num;
    }
    
    cout << fib[n];
    /*
     for i in range(2, n+1):
         num = fibonacci[i-1] + fibonacci[i-2]
         fibonacci.append(num)
     print(fibonacci[n])
     */
}
