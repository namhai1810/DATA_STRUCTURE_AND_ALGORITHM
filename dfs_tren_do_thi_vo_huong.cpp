#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll v,e,u;
bool visited[1002];
vector<int> adj[1002];

void input(){
    for(int i = 0; i < e; i++){
        int x,y; cin >>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void dfs(int k){
    visited[k] = true;
    for(int i : adj[k]){
        if(!visited[i]){
            cout<<i<<" ";
            dfs(i);
        }
    }
}
int main(){
    int t; cin >>t;
    while(t--){
        memset(adj, 0, sizeof(adj));

        cin >> v >> e >> u;
        memset(visited, 0, sizeof(visited));
        input();
        cout<<u<<" ";
        dfs(u);
        cout<<endl;
    }
}