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
void bfs(int k){
    visited[k] = true;
    queue<int> q;
    q.push(k);
    while(!q.empty()){
        int e = q.front();
        q.pop();
        for(int i : adj[e]){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
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
        int cnt = 0;
        for(int i = 1; i <= v; i++){
            if(visited[i] == false){
                bfs(i);
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}