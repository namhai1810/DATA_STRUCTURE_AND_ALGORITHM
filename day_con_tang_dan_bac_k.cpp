#include<bits/stdc++.h>
using namespace std;
int n,k; 
int a[1000], x[1000];
int stop = 1;
void sinh(){
    int inx = k;
    while(inx >=1 && a[inx] == n - k + inx) inx--;
    if(inx ==0) {stop = 0; return;}
    a[inx]++;
    for(int i = inx+1; i <= n; i++) a[i] = a[i-1]+1;
}
bool check(){
    for(int i = 1; i < k;i++){
        if(x[a[i]] > x[a[i+1]]) return false;
    }
    return true;
}

int main(){
    cin >> n>>k;
    for(int i = 1; i <= n; i++){cin >> x[i]; a[i] = i;}
    int cnt = 0;
    while(stop == 1){
        if(check()){cnt++;}
        sinh();
        // print();
    }
    cout<<cnt<<endl;
}