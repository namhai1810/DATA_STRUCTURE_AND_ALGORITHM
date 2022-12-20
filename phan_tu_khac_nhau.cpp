#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n; cin >>n;
        long long a[n],b[n-1];
        long long cnt = n-1;
        for(long long i=0; i<n; i++){ cin >>a[i];}
        for(long long i=0; i<n-1; i++){ cin >>b[i]; }
        for(int i=0; i<n-1; i++){ if(a[i] != b[i]) { cnt = i; break;}}
       cout<<cnt+1<<endl;
    }
}