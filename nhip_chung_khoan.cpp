#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[100005], b[100005] = {1};
        stack<int> st;
        for(int i = 0; i < n ; i++){
            b[i] = 1;
        }
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            if(st.empty() || (!st.empty() && a[i] < a[st.top()])){
                st.push(i);
            }else 
            if(!st.empty() && a[i] >= a[st.top()]){
                while(!st.empty() && a[i] >= a[st.top()]){
                    b[i] = b[i] + b[st.top()];
                    st.pop();
                }
                st.push(i);
            }
        }
        for(int i = 0; i < n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}