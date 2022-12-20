#include<bits/stdc++.h>
using namespace std;
struct pos {
    int x, y, w;
};

int n, m, a[1005][1005];
bool ok;
bool visit[1001][1001];

void init(){
    cin >> n >> m; ok = true;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    
    memset(visit, false, sizeof(visit));
}

void hangDoi(){
    queue<pos> q;
    q.push({1, 1, 0});
    visit[1][1] = true;
    while(!q.empty()){
        pos u = q.front(); q.pop();
        int i = u.x + a[u.x][u.y];
        int j = u.y + a[u.x][u.y];

        if((i == n && u.y == m) || (j == m && u.x == n)){
            cout << u.w + 1 << endl;
            ok = false;
            return;
        }
        if(i <= n && visit[i][u.y] == false){
            q.push({i, u.y, u.w+1});
            visit[i][u.y] = true;
        }
        if(j <= m && visit[u.x][j] == false){
            q.push({u.x, j, u.w+1});
            visit[u.x][j] = true;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        init();
        hangDoi();
        if(ok) cout << -1 << endl;
    }
}