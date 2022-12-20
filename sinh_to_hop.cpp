#include<bits/stdc++.h>
using namespace std;
int stop;
int n,k;
int a[1002];//chu y cai nay ko thi wa

void sinh(){
    int inx = k;
    while(inx >=1 && a[inx] == n - k + inx) inx--;
    if(inx ==0) {stop = 0; return;}
    a[inx]++;
    for(int i = inx+1; i <= n; i++) a[i] = a[i-1]+1;
}

int main(){
    int t; cin >>t;
    while(t--){
        cin >>n>>k;
        for(int i = 1; i <= k;i++) a[i]=i;
        stop = 1;
        while(stop == 1){
            for(int i = 1; i <= k; i++) cout<<a[i];
            sinh();      
            cout<<" ";
        }
        cout<<endl;
    }
}