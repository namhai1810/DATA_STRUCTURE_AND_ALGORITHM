#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin >>t;
    while(t--){
        ll n; cin >> n;
        ll a[n],b[n],c[n];
        for(ll &x : a) cin >> x;
        stack<ll> st;
        for(ll i = 0; i < n; i++){
            if(st.size() == 0) st.push(i);
            else{
                while(!st.empty() && a[st.top()] < a[i]){
                    b[st.top()] = a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        while(!st.empty()){
            b[st.top()] = -1;
            st.pop();
        }
        for(int i = 0; i < n; i++){
            if(b[i] == -1) c[i] = -1;
            else{
                int check = 0;
                int mark = 0;
                for(int j = i; j < n; j++){
                    if(a[j] == b[i]) mark =1;
                    if(b[i] > a[j] && mark == 1 ){
                        c[i] = a[j];
                        check = 1;
                        break;
                    }
                }
                if(check == 0) c[i] = -1;
            }
        }
        for(ll &x : c) cout<<x<<" ";
        cout<<endl;
    }
}   
