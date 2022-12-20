#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n,m; cin >>n >>m;
        int cnt = n;
        int a[n+5];
        for(int i = 0; i < n; i++){
            cin >>a[i];
            if(a[i] == m) cnt = i;
        }
        if(cnt == n) cout<<"NO\n";
else   cout<<cnt+1<<endl;
    }
}