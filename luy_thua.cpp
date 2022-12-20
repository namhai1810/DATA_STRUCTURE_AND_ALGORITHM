#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long  e = 1e9+7;
long long pow(long long a, long long b){
    if(b== 0 ) return 1;
    long long x = pow(a% e,b/2)%e;
    if(b%2==1) 
        return ((x % e) * (((x%e) * a) %e)) % e;
    else return ((x%e) *(x%e)) % e;
}
int main(){
    int t; cin >>t;
    while(t--){
        cin>>n >>k;
        cout<<pow(n,k) % e<<endl;
    }
}