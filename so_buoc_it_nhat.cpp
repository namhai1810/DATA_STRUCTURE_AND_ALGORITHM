#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    while(n--){
        int t; cin>>t;
        int a[t + 5];
        int F[10001];
        int m=0;
        for(int i = 0; i <t;i++) {cin >>a[i];F[i] =1;}
        for(int i = 0; i <t; i++){
            for(int j = 0; j < i; j++){
                if(a[i] >= a[j]){
                    F[i] = max(F[i] , F[j] +1);
                }
            }
            m = max(m,F[i]);
        }
        cout<<t-m<<endl;
    }
}