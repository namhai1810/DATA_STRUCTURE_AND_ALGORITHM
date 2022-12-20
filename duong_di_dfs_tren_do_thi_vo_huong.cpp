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
bool dfs(int k){
    visited[k] = true;
    if(k == t ){
        check = 1;
        return true;
    }
    // q.pop();
    for(int i : adj[k]){
        if(!visited[i]){
            parent[i] = k;
            if(dfs(i)) return true;
        }
    }
    return false;
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
        dfs(s);
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