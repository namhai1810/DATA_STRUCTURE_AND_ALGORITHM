#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n,m,k;
        cin >> n >> m >> k;
        map<long long,long long> mp;
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
        int mark = 1;
        int i = 0, j = 0, e = 0;
        vector<long long> v;
        while(i < n && j < m  && e < k){
            if(a[i] == b[j] && b[j] == c[e]){ 
                v.push_back(a[i]);
                i++; j++; e++;
            }
            if(a[i] <= b[j] && a[i] <= c[e]) {i++;}
            else
                if(b[j] <= a[i] && b[j] <= c[e]) j++;
            else{
                if(c[e] <= a[i] && c[e] <= b[j]) e++;
            }
        }
        if(v.size() == 0) cout<<"-1";
        else{
            for(int i = 0; i < v.size();i++) cout<<v[i]<<" ";
        }
        cout<<endl;

    }
}