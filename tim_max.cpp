#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int a[n+5];
        long long k = 1e9+7;
        for(int i = 0; i < n; i++){ cin >> a[i]; }
        sort(a,a+n);
        long long sum = 0;
        for(int i = 0; i < n; i++){ sum += ((a[i] * (i)) % k); sum %=k;}
        cout<<sum << endl;
    }
}   