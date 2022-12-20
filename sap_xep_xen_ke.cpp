#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n; cin >>n;
    while(n--){
        int k; cin >>k;
        vector<long long> v;
        for(int i=0; i<k; i++){
            int x; cin >>x; v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<k; i++){
            if(v[k-1] !=v[i]){
            cout<<v[k-1]<<" "<<v[i]<<" ";
            k--;}
            else cout<<v[k-1];
        }
        cout<<endl;
    }


}