#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n,m; cin >> n>>m;
        int idx = 1;
        long long a[n+5];
        for(int i=0;i<n;i++){
            cin >>a[i];
            if(a[i] == m) idx = i;
        }
        cout<<idx+1<<endl;
    }
}