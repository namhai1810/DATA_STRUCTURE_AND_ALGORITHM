#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n,s,m; 
        cin >> n >> s >>m;
        if(m > n ) {cout<<"-1"<<endl; continue;}
        if(s >= 7 && m * 7 > n * 6){cout<<"-1"<<endl; continue;}
        int k = s * m;
       int cnt = k %n;
       if(cnt == 0) cout<< k/n<<endl;
       else cout<<k/n+1<<endl;

    }
}    