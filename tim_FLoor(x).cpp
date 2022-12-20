#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n , x; cin >> n >>x;
        long long a[n+5];
        int cnt = n;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(x >= a[i]){
                cnt = i;
            }
        } 
        if(cnt == n) cout<<"-1\n"; 
        else cout<<cnt+1<<endl;
    }
}