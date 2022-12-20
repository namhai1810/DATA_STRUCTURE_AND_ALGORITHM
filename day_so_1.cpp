#include<bits/stdc++.h>
using namespace std;
int n;
int a[1001];
void print(){
    cout<<"[";
    for(int i = 0; i<n-1;i++) cout<<a[i]<<" ";

    cout<<a[n-1]<<']'<<endl;
}
void backtrack(int i, int idx = 0){
    a[idx] = a[i] + a[i+1];
    if(i == n){
        print();
    }else backtrack(i+1,idx+1);
}
int main(){
    int t; cin >>t;
    while(t--){
        cin >>n;
        for(int i =0; i < n; i++){cin >>a[i];}
        print();
        while(n!= 1){
            n--;
            backtrack(0);
        }   
    }
}