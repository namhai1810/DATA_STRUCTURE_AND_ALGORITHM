#include<bits/stdc++.h>
using namespace std;
int n,k;
char m;
char a[1003];
void print(){
    for(int i = 0; i < k;i++) cout<<a[i];
    cout<<endl;
}
void Try(int i, char x){
   
    for(int j = x; j <= m;j++){
        a[i] = j;
        if(i == k-1) {print(); }
        else Try(i+1,a[i]+1);
        // ta không được dùng x+1 vì khi đến trường hợp j = B lần 1 nó sẽ x +1 = B suy ra bị lặp    
    }
}
int main(){
    int t; cin >>t;
    while(t--){
        cin>>n>>k;
        m = 'A' + n-1;
         Try(0,'A');
    }
}