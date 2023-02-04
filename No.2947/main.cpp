// baekjoon 4796

#include<iostream>

using namespace std;

int main(){
    
    int arr[5];
    
    for (int i = 0; i<5; i++) {
        cin >> arr[i];
    }
    
    int temp = 0;
    
    while (true) {
        if ((arr[0] == 1) && (arr[1] == 2) && (arr[2] == 3) && (arr[3] == 4) && (arr[4] == 5)) {
            break;
        }
        
        for (int i = 0; i < 4; i++){
            if (arr[i] > arr[i + 1]){
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                
                for(int j = 0; j < 5; j++){
                    cout << arr[j] << " ";
                }
                cout << '\n';
            }
            
            
        }
        
        
    }
    
    
}
   

    

