#include<bits/stdc++.h>
using namespace std;
int n;
char a[1001];

void print(){
    for(int i = 0; i < n; i++){cout<<a[i];}
    cout<<" ";
}

void solve(int i){
    for(int j  = 'A'; j<='B';j++){
         a[i] = j;
        if(i == n-1) print();
        else solve(i+1);
        
    }
}

int main(){
    int t; cin >>t;

    while(t--){
        cin >> n;
        solve(0);
        cout<<endl;
    }
}