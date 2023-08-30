// baekjoon 7568

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
    
    int arr_h[n];
    int arr_w[n];
    int h, w;
    int point[n];
    for(int i = 0; i < n; i++){
        cin >> h >> w;
        arr_h[i] = h;
        arr_w[i] = w;
        point[i] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                if((arr_h[i] < arr_h[j] && arr_w[i] < arr_w[j])){
                    point[i]++;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << point[i] << ' ';
    }
}


