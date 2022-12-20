#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,bool> mp;
int stop;
string s;
int a[20];
ll ans;
void check(){ 
    string s1 = "";
    for(int i = 0; i < s.size(); i++){
        if(a[i] ==1){
            s1 += s[i];
        }
    }
    // cout<<endl;
    // cout<<s1<<" ";
    if(mp[stoll(s1)] && ans == -1){
        ans = stoll(s1);
    }
    if(mp[stoll(s1)] && stoll(s1) > ans){
        ans = stoll(s1);
    }

}


void sinh(){
    int k = s.size()-1;
    while(k >= 0 && a[k] == 1){
        k--;
    }
    if(k == -1) {stop = 0; return;}
    a[k] = 1;
    for(int i = k+1; i < s.size(); i++){ a[i] = 0; }
}

int main(){
    int t; cin >>t;
    for(ll i = 1; i <= 100; i++){
        mp[i*i*i] =true;
    }
    while(t--){
        cin >> s;
        memset(a,0,sizeof(a));
        stop = 1;
        ans = -1;
        while(stop == 1){
            sinh();
            check();
        }
        cout<<ans<<endl;
    }
}