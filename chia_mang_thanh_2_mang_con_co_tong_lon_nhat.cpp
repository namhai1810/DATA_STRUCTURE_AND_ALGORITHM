#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n,k; cin >>n >> k;
        int a[n + 5];
        k = min(n-k,k);
        for(int i = 0; i < n; i++){ cin >>a[i]; }
        sort(a,a+n);
        long long sum1 =0;
        long long sum2 =0;
        for(int i = 0; i < k; i++){ 
            sum1 += a[i];
        }
        for(int i = k; i < n; i++){ sum2 += a[i];}
        cout<<abs(sum2 - sum1) << endl;

    }
}   