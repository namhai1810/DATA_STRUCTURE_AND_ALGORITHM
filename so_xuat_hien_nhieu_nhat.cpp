    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main(){
        ll t; cin >>t;
        while(t--){
            ll n; cin >> n;
            ll a[n+5];
            map<ll, ll > mp;
            for(ll i=0; i< n; i++){
                cin >> a[i];
                mp[a[i]]++;
            }
            ll k =n /2;
            ll m = 0;
            ll ans = -1;
            for(ll i=0; i< n; i++){
                if(mp[a[i]] > k && mp[a[i]] > m){
                    m = mp[a[i]];
                    ans = a[i];
                }
            }
            if(ans == -1){ cout<<"NO\n";}
            else
            cout<<ans<<endl;
        }
    }