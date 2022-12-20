#include<bits/stdc++.h> 
using namespace std;
//O la co duong di
// X la ko co duong di
// Note xac dinh xem co duong di hay khong
int n,m;
pair<int,int> path[8] = {{-1,0},{0,-1},{1,0},{0,1},{-1,-1}, {-1,1}, {1,-1}, {1,1}};
char a[1001][1001];
void inp(){
    cin >>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >>a[i][j];
        }
    }
}
void dfs(int i,int j){
    a[i][j] = '.';
   // cout<<i<<" "<<j<<endl;	   
    for(int k = 0; k < 8; k++){
        int i1 = i + path[k].first;
        int j1 = j + path[k].second;
        if(i1 >=0 && j1 >=0 && i1 < n && j1 < m && a[i1][j1] == 'W'){
            dfs(i1,j1);
        }
    }
}
void solve(){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 'W'){
                cnt++;
                dfs(i,j);
            }
        }
    }
    cout<<cnt<<endl;
}
int main(){
        inp();
        solve();
}