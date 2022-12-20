#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll v,e,u,k;
bool visited[1002];
vector<int> adj[1002];
int parent[1001];
void input(){
    for(int i = 0; i < e; i++){
        int x,y; cin >>x>>y;
        adj[x].push_back(y);
    }
}
void dfs(int h){
    visited[h] = true;
    for(int i : adj[h]){
        if(!visited[i]){
            parent[i] = h;
            dfs(i);
        }
    }
    
}
int main(){
    int t; cin >>t;
    while(t--){
        memset(adj, 0, sizeof(adj));
        cin >> v >> e >> u>> k;
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        input();
        dfs(u);
        if(visited[k] == false) cout<<"-1\n";
        else{
            vector<int> ans;
            while(k != u){
                ans.push_back(k);
                k = parent[k];

            }
            ans.push_back(u);
            for(int i = ans.size() -1; i>= 0; i--){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}