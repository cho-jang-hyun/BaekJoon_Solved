// baekjoon 1260

#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

// codes for fast I/O
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}

vector<int> adj[1001];
bool visited[1001] = {false};

void dfs(int current){
    visited[current] = true;
    cout << current << ' ';
    for(auto nxt : adj[current]){
        if(visited[nxt]){
            continue;
        }
        dfs(nxt);
    }
}

void bfs(int start){
    queue<int> q;
    
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << ' ';
        for(auto nxt: adj[current]){
            if(visited[nxt]){
                continue;
            }
            q.push(nxt);
            visited[nxt] = true;
        }
    }
}

int main(){
    init();
    
    int n, m, v;
    cin >> n >> m >> v;
    
    int start_p, end_p;
    
    // 무방향 그래프이므로 두 번
    for(int i = 0; i < m; i++){
        cin >> start_p >> end_p;
        adj[start_p].push_back(end_p);
        adj[end_p].push_back(start_p);
    }
    
    for(int i = 0; i <= n; i++){
        sort(adj[i].begin(),adj[i].end());
    }

    
    dfs(v);
    
    for(int i = 0; i < 1001; i++){
        visited[i] = false;
    }
    cout << '\n';
    
    bfs(v);
    
    return 0;
}


