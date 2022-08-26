#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;
    
    int card[n];
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }
    
    int closest = 0;
    int closer;

    vector<int> index(n), chosen_idx(n);
    for (int i = 0; i < n; i++) {
        index[i] = i;
    }
    
    for (int i = n - 3; i < n; i++) {
        chosen_idx[i] = 1;
    }
    
    
    do {
        closer = 0;
        for(int i = 0; i < n; i++){
            if (chosen_idx[i] == 1){
                closer += card[i];
            }
        }

        if ((closer <= m) && (closer > closest)){
            closest = closer;
        }
    } while(next_permutation(chosen_idx.begin(), chosen_idx.end()));
    

    cout << closest;
    
}
