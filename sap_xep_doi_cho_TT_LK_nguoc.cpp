#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int t; cin >>t;
        stack<int> st;
        int a[t+5];
        int e = 0;
        for(int i = 0; i < t; i++) cin >>a[i];
        for(int i = 0; i < t-1; i++){
            for(int j = i+1; j <t;j++){
                if(a[i] > a[j]) swap(a[i], a[j]);
            }
           // cout<<"Buoc "<<i+1<<": ";
            e++;
            for(int i =t-1;i>=0;i--) st.push(a[i]);
        }
        while(st.size()){
            e--;
           cout<<"Buoc "<<e+1<<": ";

            for(int i =0;i<t;i++) {int x = st.top(); st.pop(); cout<<x<<" ";}
            cout<<endl;

        }
    }
}