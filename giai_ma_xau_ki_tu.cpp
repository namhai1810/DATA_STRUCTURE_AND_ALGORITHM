#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(char  s){
    if(s >= 'a' && s <= 'z') return true;
    return false;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<string> st;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == ']') st.push(to_string(s[i]));
            else{
                if(check(s[i])){
                    st.push(string(1,s[i]));
                }
                if(s[i] == '['){
                    string e = "";
                    while(st.top() != to_string(']') &&!st.empty()){
                        e += st.top();
                        st.pop();
                    }
                    st.pop();
                    st.push(e);
                }
                else if(s[i] >= '0' && s[i] <= '9'){
                    string k = "";
                    int mark = -1;
                    for(int j = i; j >= 0; j--){
                        if(check(s[j]) || s[j] == '[' || s[j] == ']' ){ mark = j; break;}
                        k = s[j] + k;
                    }
                    int g = stoll(k);
                    string h = st.top();
                    st.pop();
                    k = "";
                    while(g--){
                        k += h;
                    }
                    st.push(k);
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = ans + st.top();
            st.pop();
        }
        cout<<ans<<endl;


    }
}