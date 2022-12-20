#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bina(ll a[],ll l, ll r, ll x){
    // tim pt x dau tien nho hon
    int res = -1;
    while(l<=r){
        ll m = (l+r)/2;
        if(a[m] < x){
            res = m;
            l = m + 1;
        }
        else r = m-1;
    }
    return res;
}
int main(){
    int t; cin >>t;
    while(t--){
        ll n,k;
        cin >> n>>k;
        ll a[n+5];
        for(int i=0;i<n;i++){ cin >> a[i]; }
        sort(a,a+n);
        ll cnt = 0;
        for(int i = n-1;i>=2;i--){
            for(int j = i - 1;j>=1;j--){
//                ll e = k - a[i] - a[j];
                ll h = bina(a,0,j-1,k-a[i]-a[j]);
                if(h != - 1){
                    cnt +=  h - 0 +1;
                }
            }
         }
        cout<<cnt<<endl;
    }
}