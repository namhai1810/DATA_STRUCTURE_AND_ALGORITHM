#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> v[10002];
bool visited[10002];
int start,en; 
void dfs(int start){
    visited[start] = true;
    for(int i: v[start]){
        if(!visited[i]){
            visited[i] = true;
            dfs(i);
    }
}
}
int main(){
    int t; cin >>t;
    while(t--){
        memset(v, 0, sizeof(v));
        int n,m;
        cin >>n >>m;
        for(int i=0;i<m;i++){
            int x,y; cin >>x >>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int q; cin >>q;
        while(q--){
            memset(visited, false, sizeof(visited));
            cin >>start >>en;
            visited[start] = true;
            dfs(start);
            if(visited[en] == true) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}