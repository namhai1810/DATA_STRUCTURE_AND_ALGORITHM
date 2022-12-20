#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    int a[t+5];

    for(int i = 0; i <t;i++){
        cin >>a[i];
    }
    map<int,int> mp;
    for(int i = 0; i <t; i++){
        if(mp[a[i]] == 0){
            mp[a[i]]++;
        }    
    }
    for(int i =0; i<t;i++){
        if(mp[a[i]] != 0){
            cout<<a[i]<<" ";
            mp[a[i]] = 0;
        }
    }
}