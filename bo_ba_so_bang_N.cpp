#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        ll n,k;
        cin >> n>>k;
        ll a[n+5];
        for(int i=0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int mark = 0;
        for(int i=0; i < n; i++){
            for(int j = i +1 ; j < n; j++){
                if(binary_search(a + j + 1, a + n, k - a[i] - a[j])){
                    mark = 1;
                    break;
                }
            }
            if(mark == 1) break;
        }
        if(mark == 0){cout<<"NO\n";}
        else cout<<"YES\n";
    }
}