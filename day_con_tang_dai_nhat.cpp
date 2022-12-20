#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    int a[t + 5];
    int F[10001];
    for(int i = 0; i <t;i++) {cin >>a[i];F[i] =1;}
    for(int i = 0; i <t; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                F[i] = max(F[i] , F[j] +1);
            }
        }
    }
    cout<<*max_element(F,F+t)<<endl;

}