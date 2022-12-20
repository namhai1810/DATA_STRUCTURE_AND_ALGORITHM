#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack<int> st;
        for(int i = 0; i< s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9') st.push(s[i]-'0');
            if(s[i] == '+' ){
                int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                st.push(x+y);
            }
             if(s[i] == '*' ){
                int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                st.push(x*y);
            } 
            if(s[i] == '/' ){
                int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                st.push(y/x);
            }
             if(s[i] == '-' ){
                int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                st.push(y-x);
            }
        }
        while( st.size()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}