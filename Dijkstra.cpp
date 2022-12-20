#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,s;
const int maxn = 100002;
vector<pair<int,int>> adj[maxn];
const int INF = 1e9;
void inp(){
    cin >> n >> m >> s;
    for(int i = 0; i < maxn;i++) adj[i].clear();
    for(int i = 0; i < m ; i++){
        int x,y,z; cin >> x >> y >> z;
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }
}

void dijkstra(int s){
    vector<ll> d(n+1,INF);
    d[s] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
    Q.push({0,s});
    // khoang cach  dinh
    while(!Q.empty()){
        pair<int,int> top = Q.top();
        Q.pop();
        int kc = top.first;
        int u = top.second;
        if(kc > d[u]) continue;
        // update
        for(auto it : adj[u]){
            int v = it.first;
            int w = it.second;
            if(d[v] > d[u] + w){
                d[v] = d[u] + w;
                Q.push({d[v], v});
            }
        } 
    }
    for(int i = 1 ; i <= n; i++){
        cout<<d[i] <<" "; 
    }
    cout<<endl;
}

int main(){
    int t; cin >>t;
    while(t--){
        inp();
        dijkstra(s);
    }
}