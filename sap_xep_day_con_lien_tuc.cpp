#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> v1,v2; 
        for(int i = 0; i < n; i++){
            long long x; cin >> x;
            v1.push_back(x);
            v2.push_back(x);
        }
        sort(v1.begin(),v1.end());
        int l,r;
        for(int i =0; i<n;i++){
            if(v1[i] != v2[i]){l=i; break;} 
        }
        for(int i =n - 1; i >= 0; i--){
            if(v1[i] != v2[i]){
                r = i;
                break;
            }
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
}