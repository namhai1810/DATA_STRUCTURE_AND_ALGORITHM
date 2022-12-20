#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n,m,k;
        cin >> n >> m >> k;
        long long a[n+5],b[m+5], c[k+5];
        for(long long i = 0; i < n; i++){
            cin >> a[i]; 
        }
        for(long long i = 0; i < m; i++){
            cin >> b[i]; 
        }
        for(long long i = 0; i < k; i++){
            cin >> c[i]; 
        }
        int i = 0, j = 0, e = 0;
        int h = 0; 
        int g[10000];
        while(i < n && j < m  && e < k){
            if(a[i] == b[j] && b[j] == c[e]){ 
                g[h] = a[i]; 
                h++;
                i++; j++; e++;
                continue;
            }
            else{   
            if(a[i] <= b[j] && a[i] <= c[e]) {i++;}
            else
                if(b[j] <= a[i] && b[j] <= c[e]) j++;
            else{
                if(c[e] <= a[i] && c[e] <= b[j]) e++;
            }
            }
        }
        if(h == 0) cout<<"NO";
        else{
          //  cout<<h<<endl;
            for(int i = 0; i < h;i++) cout<<g[i]<<" ";
        }
        cout<<endl;

    }
}