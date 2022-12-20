#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(char s){
    string kt = "+-*/";
    for(int i = 0; i < kt.length(); i++){
        if(kt[i] == s) return true;
    }
    return false;
}
int main(){
    int t; cin >>t;
    while(t--){
        string s; cin >> s;
        stack<string> st;
        for(int i = 0; i < s.size(); i++){
            if(check(s[i])){
                string k = st.top();
                st.pop();
                string e = st.top();
                st.pop();
                st.push('(' + e + s[i] + k + ')');
            }
            else st.push(string(1,s[i]));
        }
        cout<<st.top()<<endl;
    }
}