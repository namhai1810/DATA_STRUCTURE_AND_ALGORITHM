#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; 
        cin >> n;
        int a[n+5];
        for(int i = 0 ; i < n; i++){ cin >> a[i]; }
        sort(a,a+n);
        long long k = 0;
        for(int i = 0 ; i  < n; i+=2){
            k = k*10 + a[i];
        }
        
        long long e = 0;
        for(int i = 1 ; i < n; i+=2){
            e = e * 10 + a[i];
        }
        //cout<<k<<" "<<e<<endl;
        cout<<k+e<<endl;
    }
}