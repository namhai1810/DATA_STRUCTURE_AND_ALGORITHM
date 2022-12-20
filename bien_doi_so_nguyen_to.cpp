#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool Prime[10000];
bool visited[10000];
int cnt[10005];
vector<int> snt;
vector<int> adj[9999];
void Sieve(){
    for(int i = 2; i <= 9999; i++){
        for(int j = i * i; j <= 9999; j += i){
            if(Prime[j])
                Prime[j] =false;
        }
    }
}
bool check(ll a, ll b){
    int cnt = 0;
    while(a != 0 && b != 0){
        if(a%10 != b % 10) cnt++;
        a/= 10; b/=10;
    }
    if(cnt == 1) return true;
    return false;
}

void inp(){
    for(int i = 1000; i < 9999; i++){
        for(int j = i + 1; j <= 9999; j++){
            if(Prime[i] && Prime[j] && check(i,j)){
                adj[i].push_back(j);
                adj[j].push_back(i);
            } 
        }
    }
}
void solve_bfs(int x, int y){
    visited[x] = false;
    vector<int> cnt(10000);
    cnt[x] = 0;
    queue<int> q;
    q.push(x);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        for(int k : adj[top]){
            if(!visited[k]) continue;
            q.push(k);
            cnt[k] = cnt[top] + 1;
            if(k == y) {cout<<cnt[k]<<endl; return;}
            visited[k] = false;
        }
    }

}
int main(){
    int t; cin >>t;
    memset(Prime, true, sizeof(Prime));
    Sieve();
    inp();
    while(t--){
        memset(visited,true,sizeof(visited));
        int x,y; cin >>x >>y;
        if(x == y) cout<<"0\n";
        else    solve_bfs(x,y);
    }
}