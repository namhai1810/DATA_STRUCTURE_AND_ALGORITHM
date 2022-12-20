#include<bits/stdc++.h>
using namespace std;
int n,k,stop = 1;
int a[1000],b[1000];
int cnt =0;
void print(){
      for(int i = 1; i<= n; i++){
        if(b[i] == 1)
            cout<< a[i]<<" "; 
    }
      cout<<endl;
}
void sinh(){
    int i = n;
    while(i >=1 && b[i] == 1) i--;
    if(i == 0){ stop = 0; return; }
    b[i] = 1;
    for(int j = i+1; j<=n; j++) b[j] = 0; 
    
}
bool check(){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        if(b[i]==1) sum += a[i]; 
    }
    if(sum == k) return true;
    return false;
}
int main(){ 
    cin >> n >> k;
    for(int i = 1; i<= n; i++){ cin >> a[i]; b[i] = 0; }

    while(stop ==1){
        sinh();
        if(check()){
            print();
            cnt++;
        }
        
    }
    cout<<cnt;
}