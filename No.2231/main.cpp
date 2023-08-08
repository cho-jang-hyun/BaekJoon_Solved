#include<iostream>
#include<algorithm>

using namespace std;

// 빠른 입출력
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


int main(){
    init();
    
    int n;
    cin >> n;
    
    int z = 0;
    int cnt = 0;
    
    for(int i = 0; i < n ; i++) {
        z = i;
        int temp = 0;
        temp += z;
        
        while (z > 9){
            temp += z % 10;
            z = z / 10;
        }
        temp += z;
        
        if (temp == n){
            cnt++;
            cout << i;
            break;
        }
    }
    
    // 예외 처리
    if(cnt == 0){
        cout << 0 <<'\n';
    }

    return 0;
}
