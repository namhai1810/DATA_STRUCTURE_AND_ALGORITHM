#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(char s){
    string ts = "+-/*";
    for(int i = 0; i < ts.length(); i++){
        if(s == ts[i]) return true;
    }
    return false;
}
int main(){
    int t; cin >>t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(check(s[i])) st.pop();
            if(s[i] == '(') st.push(s[i]);
        }
        if(!st.empty()) cout<<"YES\n";
        else cout<<"NO\n";  
    }
}