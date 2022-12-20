#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        ll a,b; cin >>a >> b; 
        queue<pair<ll,ll>> q;
        q.push({a,0});
        set<ll> se;
        se.insert(a);
        while(!q.empty()){
            pair<ll,ll> top = q.front();
            q.pop();
            if(top.first * 2 == b || top.first - 1 == b){
                cout<<top.second + 1<<endl;
                break;
            }

            if(top.first < b && se.find(top.first * 2) == se.end()){
                se.insert(top.first * 2);
                q.push({top.first * 2, top.second + 1});
            }
            if(se.find(top.first - 1) == se.end()){
                se.insert(top.first -1);
                q.push({top.first - 1, top.second + 1});
            }
        }
    }
}