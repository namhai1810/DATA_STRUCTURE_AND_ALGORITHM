#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<long long,long long> v1,pair<long long,long long>v2){
    if(v1.first > v2.first) return false;
    if(v1.first == v2.first && v1.second > v2.second) return false;
    return true;
}N
int main(){
    int t; cin >> t;
    while(t--){
        int x;
        int n; cin>>n >> x;
        int a[n+5];
        pair<long long,long long> v[n+5];
        int h =0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            v[h++] = {abs(a[i]-x),i};
            }
        sort(v,v+h,cmp);
        for(int i = 0; i < n; i++){
            cout<<a[v[i].second]<<" ";
        }

        cout<<endl;
    }
}