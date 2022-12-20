#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin >>t;
    while(t--){
        ll n; cin >> n;
        ll a[n+5], b[n+5];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        map<ll,ll> mp;
        for(int i = 0; i < n; i++){
            mp[b[i]] = i;
        }
        ll cnt = 0;
        vector<ll> ans;
        ll m = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] > m){
                m = a[i];
            }
            if(mp[m] <= i){
                cnt++;
                ans.push_back(i+1);
            }
        }
        cout<<cnt - 1<<endl;
        for(ll i = 0; i < ans.size() - 1; i++){cout<<ans[i]<<" ";}
        cout<<endl;
    }
}