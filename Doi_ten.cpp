#include<bits/stdc++.h>
using namespace std;
long long n;
int  k = 9;
int a[100];
int x[100];
int m;
void backTrack(int i, int idx = 1,int sum = 0){
    if(sum > n) return; 
    if(sum == n){
        m = min(m,idx );
        return;
    }
    for(int j = 0; j <= k; j++){
        x[i] = a[j];
        backTrack(i+1, idx + 1, sum + a[j]);
    }
}
int main(){
    int t; cin >>t;
    while(t--){
         memset(x,0,sizeof(x));
        memset(a,0,sizeof(a));
        cin >>n;
        m = INT_MAX;
        a[0] = 1000;
        a[1] = 500;
        a[2] = 200;
        a[3] = 100;
        a[4] = 50;
        a[5] = 20;
        a[6] = 10;
        a[7] = 5;
        a[8] = 2;
        a[9] = 1;
        sort(a,a+10);
        cout<<m<<endl;

        
    }
}