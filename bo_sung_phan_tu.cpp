#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){ 
        long long n; cin >> n;
        vector<long long> v; 
        for(long long i=0; i<n; i++){
            long long x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        long long dem= 0; 
        for(long long i=0; i<v.size()-1; i++){
            if(v[i] != v[i+1])
            dem += v[i+1] -v[i] -1;
        }
        cout<<dem<<endl;    
    }
}