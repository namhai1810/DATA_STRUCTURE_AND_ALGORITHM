#include<bits/stdc++.h>
#include<queue>
typedef long long int ll;
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        queue<ll> q;
        q.push(1);
        int cnt = 0;
        while(q.size() && q.front() <= n){
            ll tmp = q.front();
            cnt++;
            q.pop();
            if(tmp*10 <= n) q.push(tmp*10);
            if(tmp*10 + 1 <= n) q.push(tmp * 10 + 1);
        }
        cout << cnt << endl;
    }
}