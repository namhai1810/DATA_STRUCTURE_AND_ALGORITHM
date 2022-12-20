#include<bits/stdc++.h>
using namespace std;
int adj[1001][1001];
#define ll long long
int main(){
    int t; cin >>t;
    cin.ignore();
    memset(adj,0,sizeof(adj));
    for(int i=1; i<=t; i++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string num;
        while(ss >> num) {
            adj[i][stoll(num)] =1;
        }
   }
   for(int i=1; i<=t; i++){
        for(int j=1; j<=t; j++){
            if(adj[i][j] == 1) cout<<"1 ";
            else cout<<"0 ";
        }
        cout<<endl;
   }

}