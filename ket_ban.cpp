#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<int> adj[100001];
bool visited[100001];
int ans,dem;
void inp(){
    ans = 0;
    dem = 0;
    cin  >> n >> m;
    memset(adj,0, sizeof(adj));
    memset(visited,false, sizeof(visited));
    for(int  i = 0 ; i < m ; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void DFS(int u){
    dem++;
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

void solve(){
    for(int i = 1;i <= n;i++){
        if(!visited[i]){
            DFS(i);
            ans = max(ans, dem);
            dem = 0;
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