#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    int a[t+5];
    for(int i = 0; i < t; i++) cin >>a[i];
    for(int i = 0; i < t-1; i++){
        for(int j = i+1; j <t;j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
        cout<<"Buoc "<<i+1<<": ";
        for(int i =0;i<t;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}