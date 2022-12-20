#include<bits/stdc++.h>
using namespace std;
#define ll long long
int k, n ,m;
vector<int> adj[1002];
int a[1001];
bool visited[1002];
map<ll,ll> mp;
void inp(){
    cin >> k >> n >> m;
    memset(adj, 0, sizeof(adj));
    memset(a,0, sizeof(a));
    mp.clear();
    for(int i = 1; i <= k; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        int x,y; cin >> x >> y;
        adj[x].push_back(y);
    }
}
void DFS(int u){
    mp[u]++;
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

void solve(){
    int ans = 0;
    for(int i = 1; i <= k; i++){
        memset(visited, 0, sizeof(visited));
        DFS(a[i]);
    }
    for(int i = 1; i <=  n; i++){
        if(mp[i] == k){
            // cout<<i<<endl;
            ans++;
        }
        // cout<<mp[a[i]]<<endl;
    }
    cout<<ans<<endl;
}


int main(){
    inp();
    solve();
}