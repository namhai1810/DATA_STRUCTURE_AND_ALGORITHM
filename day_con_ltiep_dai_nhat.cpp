#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        ll n,k; cin >> n>>k;
        ll a[n+5];
        ll ans = 0, dem = 0,sum = 0;
        for(ll i = 0; i < n;i++){
            sum += a[i];
            dem++;
            if(sum/dem >= k){
                ans = max(dem,ans);
            }
            if(sum < 0){
                dem = 0;
                sum = 0;
            }
        }
        cout<<ans<<endl;
}