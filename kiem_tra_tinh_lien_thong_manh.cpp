#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<int> adj[1002];
bool visited[1002];
void inp(){
    cin >> n >>m;
    memset(adj,0,sizeof(adj));
    memset(visited,0,sizeof(visited));
    for(int i = 0 ; i < m; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
}

void dfs(int x){
    visited[x] = true;
    for(int v : adj[x]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

void solve(){
    dfs(1);
    bool check = true;
    for(int i = 2; i <= n; i++){
        if(!visited[i]){
            check = false;
        }
    }
    if(!check) cout<<"NO\n";
    else cout<<"YES\n";

}


int main(){
    int t; cin >>t;
    while(t--){
        inp();
        solve();
    }
}