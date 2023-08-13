// baekjoon 2503

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
    
    int n;
    cin >> n;
   
    
    int arr[729]; // 가능한 모든 수
    int index = 0;
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            for(int k = 1; k < 10; k++){
                if(j != k && i != k && i != j){
                    arr[index] = i * 100 + j * 10 + k;
                }
                else{
                    arr[index] = 0;
                }
                index++;
            }
        }
    }
    
    int input;
    int strike, ball;
    
    for(int i = 0; i < n; i++){
        cin >> input >> strike >> ball;
        
        for(int j = 0; j < 729; j++){
            if(arr[j] != 0){
                
                int st = 0;
                int b = 0;
                
                int arr1 = arr[j] / 100;
                int arr2 = arr[j] % 100 / 10;
                int arr3 = arr[j] % 10;
                
                int input1 = input / 100;
                int input2 = input % 100 / 10;
                int input3 = input % 10;
                
                if(arr1 == input1){
                    st++;
                }
                if(arr2 == input2){
                    st++;
                }
                if(arr3 == input3){
                    st++;
                }
                
                if(arr1 == input2 || arr1 == input3){
                    b++;
                }
                if(arr2 == input1 || arr2 == input3){
                    b++;
                }
                if(arr3 == input1 || arr3 == input2){
                    b++;
                }
                
                if(!(strike == st && ball == b)){
                    arr[j] = 0;
                }
            }
        }
        
    }
    int count = 0;
    
    
    for(int i = 0; i < 729; i++){
        if (arr[i] != 0){
            count++;
        }
    }
    cout << count;
    
}


