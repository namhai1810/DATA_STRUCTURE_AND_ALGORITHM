#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n; cin >> n;
        long long a[n+5], b[n+5];
        for(int i=0; i<n; i++){cin >> a[i];}
        for(int i=0; i<n; i++) cin >> b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        long long k = 0;
        for(int i=0; i<n; i++){
            k += a[i] * b[i];
        
        }
        cout<<k<<endl;
    }

}