#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> adj[1002];
bool visited[1002];
int n,m;
void inp(){
    memset(adj, 0, sizeof(adj));
    memset(visited, 0, sizeof(visited));
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
bool dfs(int u,int par){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            if(dfs(v,u)) return true;
        }
        else{
            if(v != par) return true;
        }
    }
    return false;
}
void solve(){
    int mark = 0;
    for(int i = 1 ; i <= n; i++){
        if(!visited[i]){
            if(dfs(i,0)) {mark = 1; break;}
        }
    }
    if(mark == 1) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t; cin >>t;
    while(t--){
        inp();
        solve();
    }
}