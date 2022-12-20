#include<bits/stdc++.h>
using namespace std;
int main(){
    // int t; cin>>t;
    // while(t--){
        long n; cin>>n;
        long a[n+5];
        vector<long> v1,v2,v3;
        for(long i=0; i<n; i++){cin >> a[i];}
        for(int i = 0; i < n; i+=2){
          v1.push_back(a[i]);
        }
        for(int i = 1; i < n; i+= 2){
          v2.push_back(a[i]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<int>());
        int e =0;
        for(int i = 0; i < v1.size(); i++){
          cout<<v1[i] << " ";
          if(e < v2.size()){
            cout<<v2[e]<<" ";
            e++;
          }
        }
        if(e < v2.size()){
            cout<<v2[e]<<" ";
            e++;
          }
    }
// }