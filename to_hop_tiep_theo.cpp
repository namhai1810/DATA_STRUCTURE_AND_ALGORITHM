#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1002];
int b[1002];
int stop = 1;
void sinh(){
    int x = k;
    while( x >=1 && b[x] == n -k +x) x--;
    if(x == 0 ) {stop = 0; return;}
    b[x] ++;
    for(int i = x+ 1; i <= k; i++) b[i] = b[i-1] +1;
}
int main(){
    int t; cin >>t;
    while(t--){
        set<int> se;
        stop = 1;
        cin >>n>>k;
        for(int i = 1; i <=k;i++ ){cin >>a[i]; b[i] = a[i]; se.insert(a[i]);}
        sinh();
        if(stop == 0) cout<<k<<endl;
        else{
            int cnt = 0;
            for(int i = 1; i<=k;i++){
                if(se.find(b[i]) == se.end()){cnt++;}
            }
            cout<<cnt<<endl;

        }
    }
}