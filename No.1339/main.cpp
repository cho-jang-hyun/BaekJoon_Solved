// baekjoon 1339

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
    
    int count[27] = {0};
    
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        long long len = input.length();
        
        for(int j = 0; j < len; j++){
            
            int num = input[j] - 64;
            count[num] += pow(10, len - j - 1);
            
            /*
             if(input[j] == 'A'){
                count[0] += pow(10,(len - j - 1));
            }
            else if(input[j] == 'B'){
                count[1] += pow(10,(len - j - 1));
            }
            else if(input[j] == 'C'){
                count[2] += pow(10,(len - j - 1));
            }
            else if(input[j] == 'D'){
                count[3] += pow(10,(len - j - 1));
            }
            else if(input[j] == 'E'){
                count[4] += pow(10,(len - j - 1));
            }
            else if(input[j] == 'F'){
                count[5] += pow(10,(len - j - 1));
            }
            else if(input[j] == 'G'){
                count[6] += pow(10,(len - j - 1));
            }
            else if(input[j] == 'H'){
                count[7] += pow(10,(len - j - 1));
            }
            else if(input[j] == 'I'){
                count[8] += pow(10,(len - j - 1));
            }
            else if(input[j] == 'J'){
                count[9] += pow(10,(len - j - 1));
             
            }*/
        }
        
        
        
    }
    sort(count, count + 27, greater<int>());
    
    int sum = 0;
    
    for(int i = 0; i < 27; i++){
        if(count[i] > 0){
            sum += count[i] * (9 - i);
        }
        else{
            continue;
        }
    }
    
    cout << sum;
}


