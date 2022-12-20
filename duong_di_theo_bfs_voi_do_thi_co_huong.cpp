#include<bits/stdc++.h>
using namespace std;
#define ll long long
int u ,v, s,e;
vector<int> adj[1002];
int parent[1002];
bool visited[1002];
void inp(){ 
    for(int i = 0; i < v; i++){
        ll x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i : adj[x]){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
                parent[i] = x;  
            }
        }
    }    
}
int main(){
    int t; cin >>t;
    while(t--){
        cin >> u >> v >> s >> e;
        memset(adj, 0,sizeof(adj));
        memset(visited, 0,sizeof(visited));
        memset(parent, 0,sizeof(parent));
        inp();
        bfs(s);
        if(!visited[e]) cout<<"-1\n";
        else{
            vector<int> ans;
            while(e!=s){
                ans.push_back(e);
                e = parent[e];
            }
            ans.push_back(s);
            for(int i =ans.size()-1; i >= 0; i--){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}