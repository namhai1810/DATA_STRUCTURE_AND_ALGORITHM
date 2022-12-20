#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int cnt = 0;
        int a[n+5];
        for(int i=0; i<n; i++){
            cin >>a[i];
            if(a[i] == 0){ cnt++;}
        }
        cout<<cnt<<endl;
    }
}