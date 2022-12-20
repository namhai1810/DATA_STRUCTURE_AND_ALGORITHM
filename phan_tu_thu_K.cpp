#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        vector<long long> v;
        for(int i = 0; i < n; i++){
            long long x; cin >> x;
            v.push_back(x);
        }
        for(int i = 0; i < m; i++){
            long long x; cin >> x;
            v.push_back(x);
        }
        // v.push_back(k);
        sort(v.begin(),v.end());
        cout<<v[k-1]<<endl;
        // int cnt;
        // for(int i = 0; i <v.size(); i++){
        //     if(v[i] == k){
        //         cnt = i;
        //         break;
        //     }
        // }
        // for(int i = 0; i< v.size(); i++){ cout<<v[i]<<" "; }
        // cout<<endl;
        // cout<<cnt+1<<endl;
    }
}   