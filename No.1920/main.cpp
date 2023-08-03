// baekjoon 1920

#include<iostream>
#include<algorithm>

using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}

// binary search 구현
int bin_search(int arr[], int size, int key){
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (arr[mid] == key){
            return 1;
        }
        else if (arr[mid] > key){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return 0;
}

int main(){
    init(); // codes for fast I/O
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    int k;
    cin >> k;
    
    int check;
    
    for(int j = 0; j < k; j++){
        cin >> check;
        //cout << binary_search(arr, arr+n, check) << ' ';
        cout << bin_search(arr, n, check) << ' ';
    }
}
    

