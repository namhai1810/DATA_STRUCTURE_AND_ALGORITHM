#include<bits/stdc++.h>
using namespace std;
int n,k; 
int a[1002];
int b[1002];
int stop;
void sinh(){
    int idx = k;
    while(idx >= 1 && b[idx] == n - k + idx) idx--;
    if(idx == 0) {stop = 0; return;}
    b[idx]++;
    for(int i = idx +1; i<=n;i++) b[i] = b[i-1] +1;
}
int main(){
    int t; cin >>t;
    while(t--){
        set<int> se;
        cin >>n>>k;
        for(int i = 1; i<=k; i++){
            cin >>a[i];
            se.insert(a[i]);
            b[i] = i;
        }
        stop = 1;
        int cnt = 1;
        while(stop == 1){
            sinh();
             int dem = 0;
            for(int i=1; i<=k; i++){
                if(a[i] == b[i]) dem++;
            }
            cnt++;
            if(dem == k) break;
        }
        cout<<cnt<<endl;
    }
}