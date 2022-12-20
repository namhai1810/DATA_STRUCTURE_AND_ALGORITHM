#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> adj[1000];
bool visited[1000];
bool DFS(int v, int parent) {
    visited[v] = true;
    for(int x : adj[v]){
        if(!visited[x]){
            if(DFS(x,v)) return true;
        }
        else{
            if(x != parent) return true;
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

        for(int i = 0; i < e; i++){
            int x,y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int mark =0;
        for(int i = 1; i <= v; i++){
            if(visited[i] == false){
                if(DFS(i,0)) {mark = 1; break;}
            }
        }
        if(mark == 1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}