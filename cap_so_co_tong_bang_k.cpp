#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bina(ll a[], ll l, ll r, ll x){
    ll res = -1;
    while(l <=r){
        ll m = (r+l)/2;
        if(a[m] == x){
            res = m;
            return res;
        }
        if(a[m]> x) r = m-1;
        if(a[m] < x) l = m +1;
    }
    return res;
}
int main(){
    int t; cin >>t;
    while(t--){
        ll n ,k;
        cin >> n>>k; 
        ll a[n+5];
        map<ll,ll> mp;
        for(int i=0; i<n; i++){cin >> a[i]; mp[a[i]]++;}
        sort(a,a+n);
        ll cnt =0;
        for(int i = 0; i<n; i++){
            cnt += mp[k-a[i]];
            if(a[i] * 2 == k) cnt--;
            
        }
        cout<<cnt/2<<endl;
    }
}