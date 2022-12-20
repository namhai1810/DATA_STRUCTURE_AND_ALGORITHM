#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<char> st;
        // cout<<s<<endl;
        int mark = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == '(') st.push(s[i]);
            else{
                // if((s[i] == '+' || s[i] == '-') && st.size() == 0) {mark = 0; break;}
                if((s[i] == '+' || s[i] == '-') && st.size() != 0) st.pop();
            }
        }
        if(mark == 0) cout<<"Yes\n";
        else{
            if(mark == 1 && st.size() == 0) cout<<"No\n";
            else cout<<"Yes\n";
        }
    }
}