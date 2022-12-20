#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll v,e,s,t;
bool visited[1002];
vector<int> adj[1002];
int parent[1002];
int check = 0;
void input(){
    for(int i = 0; i < e; i++){
        int x,y; cin >>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void bfs(int k){
    visited[k] = true;
    queue<int> q;
    q.push(k);
    while(!q.empty()){
        int e = q.front();
        if(e == t){
            check = 1;
            return;
        }
        q.pop();
        for(int x : adj[e]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                parent[x] = e;
            }
        }
    }
}

int main(){
    int n; cin >>n;
    while(n--){
        check = 0;
        memset(adj, 0, sizeof(adj));
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        cin >> v >> e >> s >> t;
        input();
        bfs(s);
        if(!check) cout<<"-1\n";
        else{
            vector<int> ans;
            while(t!= s){
                ans.push_back(t);
                t = parent[t];
            }
            ans.push_back(s);
            for(int  i =ans.size() - 1; i >= 0; i--){
                cout<<ans[i]<<" ";
            }
            cout<<endl; 
        }
    }
}