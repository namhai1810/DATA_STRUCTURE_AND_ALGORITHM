#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int a[n+5];
        int b[n+5];
        for(int  i=0; i<n; i++){ b[i] = i+1; }
        int count =0;
        for(int  i=0; i<n; i++){ cin >> a[i]; if(a[i] == b[i]) count++;}
        int cnt = 0;
        if(count == n) cout<<1<<endl;
        else{
        while(next_permutation(b,b+n)){
            int dem = 0;
            for(int i=0; i<n; i++){
                if(a[i] == b[i]) dem++;
            }
            cnt++;
            if(dem == n) break;
        }
        cout<<cnt+1<<endl;
    }
    }
}