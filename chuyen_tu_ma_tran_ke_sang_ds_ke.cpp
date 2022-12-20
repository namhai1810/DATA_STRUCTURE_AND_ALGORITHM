#include<bits/stdc++.h>
using namespace std;
#define ll long long
int adj[1001][1001];
vector<int> ans[1002];
int main(){
    int t; cin >>t;
    for(int i=1 ; i<=t ; i++){
        for(int j=1 ; j<=t ; j++){
            cin >> adj[i][j];
        }
    }
    for(int i=1 ; i<=t ; i++){
        for(int j=1 ; j<=t ; j++){
            if(adj[i][j] == 1){
                ans[i].push_back(j);
            }
        }
    }
    for(int i=1 ; i<= t ; i++){
        for(int x : ans[i])
            cout<<x<<" ";
        cout<<endl;
    }


}