#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin >>t;
    while(t--){
        ll k;
        string s;
        cin >> k>>s;
        priority_queue<ll> q;
        map<char, ll> mp;
        for(ll i = 0 ; i < s.length() ; i++){
            mp[s[i]]++;
        }
        for(auto i : mp){
            q.push(i.second);
        }
        for(ll i = 0; i < k; i++){
            ll x = q.top();
            q.pop();
            q.push(x - 1);
        }
        ll ans = 0;
        while(!q.empty()){
            ans += q.top() * q.top();
            q.pop();
        }
        cout<<ans << endl;
    }

}