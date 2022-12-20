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
        stack<ll> st;
        for(int i=s.size() - 1; i >= 0; i--){
            if(check(s[i])){
                int temp1 = st.top(); st.pop();
                int temp2 = st.top(); st.pop();
                if(s[i]=='+') st.push(temp1+temp2);
                else if(s[i]=='-') st.push(temp1-temp2);
                else if(s[i]=='*') st.push(temp1*temp2);
                else if(s[i]=='/') st.push(temp1/temp2);
            }else{
                st.push(s[i] - '0');
            }
        }
        cout<<st.top()<<endl;
    }
}