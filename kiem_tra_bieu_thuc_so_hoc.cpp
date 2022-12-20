#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        stack<char> st;
        bool check = false;
        for(int i=0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') st.push(s[i]);
            else{
                if(s[i]== ')'){
                if(st.top() == '('){check = true; break; }
                while(st.top() != '(' && st.size()){
                    st.pop();
                }
                st.pop();
                }
            }
        }
        if(check) cout<<"Yes\n";
        else cout<<"No\n";
    }
  
}