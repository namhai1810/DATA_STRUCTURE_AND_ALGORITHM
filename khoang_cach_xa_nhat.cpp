#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll,ll> a , pair<ll,ll> b){
    if(a.first < b.first) return true;
    if(a.first == b.first && a.second < b.second) return true;
    return false;
}

int main(){
    int t; cin >>t;
    while(t--){
        ll n; cin >> n;
        ll a[n+5];
        vector<pair<ll,ll>> v;
        for(int i = 0; i < n; i++){cin >> a[i]; v.push_back({a[i], i});}
        sort(v.begin(), v.end());
        ll ans = -1, k = v[0].first, index = v[0].second;      
        for(int i = 1; i < v.size(); i++){
            if(v[i].first  > k){
                ans = max(ans, v[i].second - index);
            }
            if(index > v[i].second){
                k = v[i].first;
                index = v[i].second;
            }
        }  
        if(ans == -1){ cout<<"-1\n";}
        else cout<<ans<<endl;
    }
}