#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(char  s){
    string ts = "+-*/";
    for(int i=0; i < ts.length(); i++){
        if(s == ts[i]) return true;
    }
    return false;
}
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s; 
        getline(cin, s);
        stack<string> st;
        for(int i = 0; i <s.length(); i++){
            if(check(s[i])){
                string k = st.top();st.pop();
                string e = st.top();st.pop();
                st.push(s[i] + e +k);
            }
            else st.push(string(1,s[i]));
        }
        cout<<st.top()<<endl;

    }
    
}