#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){ 
        int n,m; cin>>n>>m;
        set<int> se,se1,se2;
        for(int i=0;i<n;i++){ 
            int x; cin>>x; se.insert(x);
            se1.insert(x);
        }
        for(int i=0;i<m;i++){
            int x; cin>>x; se.insert(x);
            se2.insert(x);
        }
        for(int x : se) cout<<x<<" ";
        cout<<endl; 
        for(int x:se1){ 
            if(se2.find(x) != se2.end()){ cout<<x<<" "; }
        }
        cout<<endl;

    }
}