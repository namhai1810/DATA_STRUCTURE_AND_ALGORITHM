#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k,m;
int a[200][200];
vector<pair<int,int>> v;
set<pair<pair<int,int>,pair<int,int>>> se;
bool visited[200][200];
pair<int,int> path[4] = {{-1,0}, {1,0}, {0,-1}, {0,1}};
void inp(){
    cin >> n >> k >> m;
    memset(a,0,sizeof(a));
    memset(visited,0,sizeof(visited));
    v.clear();
    for(int i = 0; i <  m; i++){
        int x,y,z,t;
        cin >> x >> y >> z >> t;
        se.insert({{x,y}, {z,t}});
    }
    for(int i = 0; i < k; i++){
        int x,y; cin >> x >>y;
        v.push_back({x,y});
    }
}

void dfs(int i , int j){
    visited[i][j] = true;
    for(int e = 0; e < 4; e++){
        int i1 = i + path[e].first;
        int j1 = j + path[e].second;
        if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= n && !visited[i1][j1]&& se.find({{i,j},{i1,j1}}) == se.end()
        && se.find({{i1,j1},{i,j}}) == se.end())
        {
            dfs(i1,j1);
        }
    }
}


void solve(){
    int ans = 0;
    for(int i = 0; i < k; i++){
        memset(visited, 0, sizeof(visited));
        dfs(v[i].first,v[i].second);
        for(int j = 0; j < k; j++){
            if(!visited[v[j].first][v[j].second]) ans++;
        }
    }
    cout<<ans/2<<endl;
}

int main(){
    inp();
    solve();
}