#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        map<char,int> mp;
        int m = 0;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
            m = max(m,mp[s[i]]);
        }
        if((m-1)* (n-1) > s.size() - m) cout<<"-1\n";
        else cout<<"1\n";
    }
}