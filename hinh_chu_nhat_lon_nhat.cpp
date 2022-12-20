#include<bits/stdc++.h>
#include<stack> 
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        for(ll &x : a){cin >> x;}
        ll i = 0;
        stack<ll> st;
        ll res = -1;
        while(i<n){
            if(st.empty() || a[st.top()] <= a[i]) {st.push(i); i++;}
            else{
                ll inx = st.top();
                st.pop();
                if(st.empty()){
                    res = max(res, a[inx] * i);
                }else{
                    res = max(res, a[inx] *(i-st.top()-1));
                }
            }
        }
        while(!st.empty()){
            ll inx = st.top();
            st.pop();
                if(st.empty()){
                    res = max(res, a[inx] * i);
                }else{
                    res = max(res, a[inx] *(i-st.top()-1));
                }
        }
        cout<<res<<endl;
    }
}
//https://www.youtube.com/watch?v=MQZ1TH0l7sk&t=1755s