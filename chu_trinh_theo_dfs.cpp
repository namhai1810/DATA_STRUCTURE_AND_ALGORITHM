#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> adj[1002];
bool visited[1002];
int parent[1002];
int s,en;
bool DFS(int u) {
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            parent[v] =u;
            if(DFS(v)) return true;
        }
        else{
            if(v != parent[u] && v == 1){ s = v; en = u; return true;}
        }
    }
    return false;
}
int main(){
    int t; cin >>t;
    while(t--){
        int v,e;
        cin  >> v >>e;
        memset(visited, false, sizeof(visited));
        memset(adj, 0, sizeof(adj));
        memset(parent, 0, sizeof(parent));
        for(int i = 0; i < e; i++){
            int x,y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= v; i++){
            sort(adj[i].begin(), adj[i].end());
        }
        if(DFS(1)){
            // cout<<s<<en<<endl;
            vector<int> ans;
            cout<<"1 ";
            while(s!= en){
                ans.push_back(en);
                en = parent[en];
            }
            for(int i = ans.size() - 1; i >= 0; i--) cout<<ans[i]<<" ";
            cout<<"1"<<endl;
        }
        else cout<<"NO\n";
    }
}