#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll v,e,u;
bool visited[1002];
vector<int> adj[1002];

void input(){
    cin.ignore();
    string s; getline(cin,s);
    stringstream ss(s);
    int x,y;
    while(ss >> x){
        ss>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void bfs(int k){
    cout<<k<<" ";

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
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;

}
int main(){
    int t; cin >>t;
    while(t--){
        memset(adj, 0, sizeof(adj));

        cin >> v >> e >> u;
        memset(visited, false, sizeof(visited));
        input();
        bfs(u);
    }
}