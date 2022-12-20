#include<bits/stdc++.h>
using namespace std;
int n,k,stop = 1;
int a[1000],b[1000];
void print(){
      for(int i = 1; i<= n; i++){
            cout<< b[i]; 
    }
      cout<<endl;
}
void sinh(){
    int i = n;
    while(i >=1 && b[i] == 1) i--;
    if(i == 0){ stop = 0; retrn; }
    b[i] = 1;
    for(int j = i+1; j<=n; j++) b[j] = 0; 
    
}
bool check(){
    int cnt = 0;
    for(int i = 1; i<=n; i++){
        if(b[i]==1) cnt ++; 
    }
    if(cnt == k) return true;
    return false;
}
int main(){ 
    int t; cin>>t;
    while(t--){
    cin >> n >> k;
    for(int i = 1; i<= n; i++){ b[i] = 0; }
    stop =1;
    while(stop ==1){
        sinh();
        if(check()){
            print();
        }
        
    }
    }
}