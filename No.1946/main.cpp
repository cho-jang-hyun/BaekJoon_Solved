// baekjoon 1946

#include<iostream>
#include<algorithm>
#include<utility>


using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


int main(){
    init();
    
    int t;
    cin >> t;
    
    int n;
    while (t--) {
        cin >> n;
        
        pair<int, int> score[n];
        for(int i = 0; i < n; i++) {
            cin >> score[i].first >> score[i].second;
        }
        
        sort(score, score + n);
        
        int max_score = score[0].second;
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(score[i].second <= max_score){
                count++;
                max_score = score[i].second;
            }
        }
        
        cout << count << '\n';
    }
}


