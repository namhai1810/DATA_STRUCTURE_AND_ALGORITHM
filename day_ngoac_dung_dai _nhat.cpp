#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        string s; cin >> s;
        stack<int> st;
        st.push(-1);
        int ans = 0;
        for(int i = 0 ;i  < s.size(); i++){
            if(s[i] == '(') st.push(i);
            else{
                st.pop();
                if(st.size() > 0){
                    ans = max(ans, i - st.top());
                }
                if(st.size() == 0){
                    st.push(i);
                }
            }
            // cout<<ans<<" ";
        }
        cout<<ans<<endl;
    }
}