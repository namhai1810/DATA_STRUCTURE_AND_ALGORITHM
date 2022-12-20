#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        string s;
        cin >>s;
        stack<char> st;
        int cnt = 0;
        int remove = 0;
        int ans = 0;
        for(int i=0; i< s.size(); i++){
            if(st.size() == 0) st.push(s[i]);
            else{
                if(st.top() == '[' && s[i] == ']'){
                    remove+= 2;
                    st.pop();
                }
                else{
                    if(st.top() == ']' && s[i] == '['){
                        ans += st.size() + remove;
                        st.pop();
                    }
                    else if(s[i] =='[') st.push(s[i]);
                    else if(st.top() == ']' && s[i] == ']') st.push(s[i]);
                }
            }
            if(st.size() == 0) remove = 0;
        }
        cout<<ans<<endl;
    }
}