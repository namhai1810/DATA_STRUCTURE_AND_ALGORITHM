#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int a[n+5],b[n+5];
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        for(int i = 0; i < n;i++){
            mp[b[i]] = i;
        }
        int mark = 1;
        int k = n - 1;
        int e = n/2+1;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i] && i != e){
                swap(a[i], a[k]);
                if(a[i] != b[i]){ mark = 0; break; }
            }
                k--;
        }
        if(mark == 0){ cout<<"No\n";}
        else cout<<"Yes"<<endl;
    }
}