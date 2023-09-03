// baekjoon 14646

#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>


using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first < b.first;
}

int main(){
    init();
    
    int n ;
    cin >> n;
    
    int c, d;
    vector<pair<int, int>> v;
    
    for(int i = 0; i < n; i++){
        cin >> c >> d;
        v.push_back({d,c});
    }
    
    sort(v.begin(), v.end(),cmp);
    
    int count = 1;
    d = v[0].first;
    c = v[0].second;
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (v[j].first > d && v[j].second < c) {
                ++count;
                d = v[j].first;
                c = v[j].second;
                break;
            }
        }
    }
    
    cout << count;
    return 0;
}


