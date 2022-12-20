#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >>n;
        int a[n+5];
        int mark = 0;
        for(int i = 0; i < n; i++){
            cin >>a[i];
            if(i >=1 && a[i-1] <= a[i]) mark = 0;
        }
        if(mark == 1){ 
            for(int i = 0; i < n; i++){cout<<i+1<<" ";}
            cout<<endl;
            continue;
        }
        next_permutation(a,a+n);
        for(int i = 0; i < n; i++){cout<<a[i]<<" ";}
        cout<<endl;

    }

}