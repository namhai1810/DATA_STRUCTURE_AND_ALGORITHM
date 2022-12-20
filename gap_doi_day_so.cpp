#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll a[n+1];
        for(ll i = 1; i <= n; i++){
            a[i] = pow(2,i-1);
            // cout<<a[i]<<" ";
        }
        for(ll i = n; i >= 1; i--){
            if(a[i] == k){
                cout<<i<<" ";
                break;
            }
            if(k > a[i]){
                k = (k - a[i]);
            }
        }
        cout<<endl;
    }
}