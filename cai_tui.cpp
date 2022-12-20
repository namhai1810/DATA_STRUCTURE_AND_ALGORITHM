#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n,v;
        cin >> n >>v;
        int thetich[n+5],value[n+5];
        for(int i = 1; i <= n; i++) cin >> thetich[i];
        for(int i = 1; i <= n; i++) cin >> value[i];
        long long dp[n+5][v+5];
        memset(dp,0,sizeof(dp));
        for(int i = 1; i <= n; i++){
            for(int j = 1 ; j <= v;j++){
                dp[i][j] = dp[i-1][j];
                if(j >= thetich[i]){
                    dp[i][j] = max(dp[i][j],dp[i-1][j-thetich[i]] + value[i]);
                }
            }
        }
        cout<<dp[n][v]<<endl;

    }
}