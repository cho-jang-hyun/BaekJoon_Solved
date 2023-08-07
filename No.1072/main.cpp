// baekjoon 1072

#include<iostream>
#include<algorithm>

using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


int main(){
    init();
    
    long long n;
    cin >> n;
    
    long long input;
    cin >> input;
    
    
    
    int win = input * 100 / n;
    
    if(win >= 99){
        cout << -1;
        return 0;
    }
    
    int low = 0;
    int high = n;

    int result = -1;

    while (low <= high)

    {

             int mid = (low + high) / 2;
             int goal = (100 * (input + mid)) / (n + mid);

             if (win >= goal){
                     result = mid + 1;
                     low = mid + 1;
             }

             else{
                 high = mid - 1;
             }

    }

    cout << result << "\n";

    return 0;

}

