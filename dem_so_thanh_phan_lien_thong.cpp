#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> adj[1002];
bool visited[1002];
int n,m;

void inp(){
    cin  >> n >>m;
    memset(adj,0,sizeof(adj));
    memset(visited,0,sizeof(visited));
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void DFS(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

void solve(){
    int ans= 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ans++;
            DFS(i);
        }
    }
    cout<<ans<<endl;
}


int main(){
    int t; cin >>t;
    while(t--){
        inp();
        solve();
    }
}