#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,n;
    cin >> c >> n;
    int v[c], w[c];
long long dp[n+1][c+1];
// bo   weight
    for(int i = 0; i < n;i++) cin >> w[i];
    for(int i = 0; i <n;i++){
        for(int j = 0; j <= c; j++){
            dp[i][j] = dp[i-1][j];
            if(j > w[i]){
                dp[i][j] = max(dp[i][j],dp[i-1][j-w[i]] + )
            }
        }
    }
}