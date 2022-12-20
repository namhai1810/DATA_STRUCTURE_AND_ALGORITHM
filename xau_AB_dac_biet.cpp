#include<bits/stdc++.h>
using namespace std;
int n,k,stop = 1;
char a[1000][1000];
int b[1000];
int e = 0;
void convert(){
    for(int i = 1; i<= n; i++){
        if(b[i] == 0){ a[e][i] = 'A';}
        else a[e][i] = 'B';
    }
    e++;
}
void sinh(){
    int i = n;
    while(i >=1 && b[i] == 1) i--;
    if(i == 0){ stop = 0; return; }
    b[i] = 1;
    for(int j = i+1; j<=n; j++) b[j] = 0; 
    
}
bool check(){
    int cnt = 0;
    int dem = 0;
    for(int i = 1; i<=n; i++){
        if(b[i]==0) cnt++; 
        else{
            dem = max(dem, cnt);
            cnt = 0;
        }
    }
    dem = max(dem, cnt);
    if(dem == k) return true;
    return false;
}
int main(){ 
    cin >> n >> k;
    for(int i = 1; i<= n; i++){ b[i] = 0; }
    stop =1;
    while(stop ==1){
        sinh();
        if(check()) convert();   
    }
    cout<<e<<endl;
    for(int i = 0; i < e; i++){
        for(int j = 1; j <= n; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
}