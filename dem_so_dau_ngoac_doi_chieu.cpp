#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack<char> st;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){ 
            if(s[i] == '(') st.push(s[i]);
            else{
                if(st.size() == 0){
                    cnt ++;
                    s[i] = '(';
                    st.push(s[i]);
                    continue;
                }
                st.pop();
                
            }
        }
        if(st.size() != 0){
            cnt +=  st.size()/2;
        }
        cout<<cnt<<endl;

    }
}