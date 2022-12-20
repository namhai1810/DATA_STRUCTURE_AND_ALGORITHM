#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll v,e,u;
bool visited[1002];
vector<int> adj[10002];

void input(){
     for (int i = 0; i < e; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void dfs(int u){
    visited[u]=true;
    for(int x : adj[u]){
        if(visited[x]== false){
            dfs(x);
        }
    }
}

int main(){
    int t; cin >>t;
    while(t--){
        memset(adj, 0, sizeof(adj));
        cin >> v >> e;
        memset(visited, false, sizeof(visited));
        input();
        int tplt = 0;
        for(int i = 1; i <= v; i++){
            if(visited[i] == false){
                dfs(i);
                tplt++;
            }
        }
        for(int i = 1; i <= v; i++){
            memset(visited, false, sizeof(visited));
            visited[i] = true;
            int dem = 0;
            for(int j = 1; j <= v; j++){
                if(visited[j] == false){
                    dfs(j);
                    dem++;
            }
            }
            if(dem > tplt) cout<<i<<" ";
        }
        cout<<endl;
    }
}