#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        ll n; cin >>n;
        ll a[n+5];
        int mark = 0;
        map<ll,ll> mp;
        ll k;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]] ++;

        }
        for(int i = 0; i < n; i++){
            if( mp[a[i]] == 2){
                k = a[i];
                mark = 1; break;
            }
        }
        if( mark == 0) cout<<"NO"<<endl;
        else
        cout<<k<<endl;
        
    }
}