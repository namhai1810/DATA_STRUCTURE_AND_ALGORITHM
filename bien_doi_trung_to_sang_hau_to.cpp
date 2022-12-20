#include<bits/stdc++.h>
using namespace std;
#define ll long long
int degree(char s){
    if(s == '^') return 5;
    if(s == '*' || s == '/') return 4;
    if(s == '+' || s == '-') return 3;
    return 2;
}
bool check(char s){
    if(s >= 'a' && s <= 'z') return true;
    if(s >= 'A' && s <= 'Z') return true;
    return false;
}
bool checkKiTu(char s){
    string x = "+-*/^";
    for(int i = 0; i < x.length(); i++){
        if(s == x[i]) return true;
    }
    return false;
}
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack<char> st;
        string ans = "";
        for(int i = 0; i < s.length(); i++){
            if(check(s[i])) ans += s[i];
            if(s[i] == '(') st.push(s[i]);
            if(s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                if(checkKiTu(s[i])){
                    while(!st.empty() && degree(st.top()) >= degree(s[i])){
                        ans += st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            if(st.top() != '(')
            ans += st.top();
            st.pop();
        }
        cout<<ans<<endl;
    }
}