#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> adj[1000];
int check[1000];
bool DFS(int u){
    check[u] = 1;
    for(int x : adj[u]){
        if(check[x] == 0){
            if(DFS(x)){
                return true;
            }
        }else{
            if(check[x] == 1){
                return true;
            }
        }
    }
    check[u] = 2;
    return false;
}
int main(){
    int t; cin >>t;
    while(t--){
        int n,m;
        cin >> n >> m;
        memset(check,0,sizeof(check));
        memset(adj,0,sizeof(adj));
        for(int i  = 0; i < m; i++){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        int mark = 0;
        for(int i = 1; i <= n; i++){
            if(check[i] == 0){
                if(DFS(i)){
                    mark = 1; break;
                }
            }
        }
        if(mark == 1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}