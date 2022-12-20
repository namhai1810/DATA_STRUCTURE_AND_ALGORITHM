#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n,m;
        cin >> n >>m;
        long long a[n+5],b[m+5];
        long long k = INT_MIN,e = INT_MAX;
        for(long long i = 0; i < n; i++){
            cin >> a[i];
            k = max(a[i],k);
        }
        for(int i = 0; i < m; i++){
            cin >>b[i];
            e = min(e,b[i]);
        }
        cout<<k*e<<endl;

    }
}