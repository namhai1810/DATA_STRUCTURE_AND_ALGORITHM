// su dung xau nhi phan de in ra ma gray
#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
int stop = 1;

void generative(){
    int i = n -1;
    while(i >= 0 && a[i] == 1) i--;
    if(i == -1) {stop = 0; return;}
    a[i] = 1;
    for(int j = i+1; j<n; j++) a[j] = 0;
}

void solve(){
    while(stop == 1){
        cout<<a[0];
        for(int i = 1; i<n;i++){
            if(a[i] != a[i-1]) cout<<"1";
            else cout<<"0";
        }
        cout<<" ";
        generative();
    }
}

int main(){
    int t; cin >>t;
    while(t--){
        stop = 1;
        cin >>n;
        memset(a, 0, sizeof(a));
        solve();
        cout<<endl;
    }

}