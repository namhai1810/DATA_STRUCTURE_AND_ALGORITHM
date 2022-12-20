#include<bits/stdc++.h>
using namespace std;

int n, m;
bool visit[1005];
vector<int> g[1005];
vector<pair<int, int>> edge;

void init(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
        edge.push_back({x, y});

    }
    sort(edge.begin(), edge.end());
    memset(visit, false, sizeof(visit));
}

void bfs(int s, int u, int v){
    visit[s] = true;
    for(auto x : g[s]){
        if((x == u && s == v) || (x == v && s == u))
            continue;
        if(!visit[x]){
            bfs(x, u, v);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        init();
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(!visit[i]){
                cnt++;
                bfs(i, 0, 0);
            }
        }
        for(auto it : edge){
            int u = it.first;
            int v = it.second;
            memset(visit, false, sizeof(visit));
            int dem = 0;
            for(int j = 1; j <= n; j++){
                if(!visit[j]){
                    dem++;
                    bfs(j, u, v);
                }
            }

            if(dem > cnt){
                cout << u << " " << v << " ";
            }
        }
        for(int i = 1; i <= n; i++) g[i].clear();
        edge.clear();
        cout << endl;
    }
}