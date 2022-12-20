#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        int v, e, u;
        cin >> v >> e >> u;
        bool visited[1000];
        memset(visited, 0, sizeof(visited));
        vector<int> adj[1000];
        for(int i = 0; i < e; i++){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        //  for (int i = 1; i <= v; i++)
        //     sort(adj[i].begin(), adj[i].end());
        queue<int> q;
        q.push(u);
        cout<<u<<" ";
        while(!q.empty()){
            int x = q.front();
            q.pop();
            visited[x] = true;
            for(int i : adj[x]){
                if(!visited[i]){
                    visited[i] = true;
                    cout<<i<<" ";
                    q.push(i);
                }
            }
        }
        cout<<endl;

    }
}