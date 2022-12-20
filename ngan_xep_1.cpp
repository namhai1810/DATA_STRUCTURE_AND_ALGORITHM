#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st1;
    string s;
    while(getline(cin, s)){
        stringstream ss(s);
        string x;
        ss >> x;
        int x1;
        if(x.size() == 4 && x == "push"){ ss >> x1; st1.push(x1); }
        if(x.size() == 3 && x ==  "pop" ){st1.pop(); if(st1.size() == 0) cout<<"empty"<<endl;}
        if(x.size() == 4 && x == "show"){
            vector<int> v;
          while(st1.size()!= 0){
            int x = st1.top();
            // cout<<x<<" ";
            st1.pop();
           v.push_back(x);
          }
          for(int i = v.size()-1; i >= 0; i--){
                cout<<v[i]<<" ";
                st1.push(v[i]);
          }
          cout<<endl;
          
        }
    }
}