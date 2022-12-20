#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        ll n; cin >> n;
        ll a[n+5];
        int mark = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == n) mark = i;
        }
        if(mark == n -1) cout<<"0";
        else    cout<<mark+1<<endl;        
    }
}