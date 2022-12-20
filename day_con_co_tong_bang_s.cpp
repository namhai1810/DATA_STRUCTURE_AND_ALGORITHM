#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n,k;
        cin >>n>>k;
        long long a[10000];
        bool dp[k+5];
        // chu y do lon mang theo s
        memset(dp,false,sizeof(dp));
        for(int i = 0; i < n; i++){
            cin >> a[i];
            dp[a[i]] = true;
        }
        for(int i = 0; i < n; i++){
            for(int j = k; j >= 1;j--){
                if( j >= a[i] && dp[j-a[i]] == true ) dp[j] = true; 
            }
        }
        if(dp[k] == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;  
        }
}