#include<bits/stdc++.h>
using namespace std;
string s;
long long n,r;
long long e =1e9+7;
long long pow(long long a, long long b){
    if(b== 0 ) return 1;
    long long x = pow(a,b/2);
    if(b%2==1) 
        return ((x * x) %e * a) % e;
    else return (x *x) % e;
}
int main(){
    int t; cin >>t;
    while(t--){
        cin >> s;
        string h = s;
        reverse(h.begin(),h.end());
        stringstream ss(s); ss >> n;
        stringstream ss1(h); ss1 >> r;
        cout<<pow(n,r) % e<<endl;
    }
}