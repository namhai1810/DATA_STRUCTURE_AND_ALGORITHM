#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n,m; cin >> n>>m;
        int mark = 1;
        long long a[n+5];
        for(int i=0;i<n;i++){
            cin >>a[i];
            if(a[i] == m) mark =0;
        }
        if(mark == 1) cout<<-1<<endl;
        else cout<<1<<endl;
    }
}