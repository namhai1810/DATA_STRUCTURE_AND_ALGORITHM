#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    int a[t+5];
    int n;
    for(int i = 0; i <t;i++){
        cin >>a[i];
    }
    cin >>n;
    vector<int> x;
    for(int i = 0; i <t; i++){
        if(a[i] != n) x.push_back(a[i]);
    }
    for(int i = 0; i<x.size(); i++) cout<<x[i]<<" ";

}