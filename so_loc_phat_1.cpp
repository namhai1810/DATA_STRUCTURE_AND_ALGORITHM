#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        queue<string> q;
        vector<string> v; 
        q.push("6");
        q.push("8");
        v.push_back("6");
        v.push_back("8");
        string s1 = "", s2 = "";
        while(true){

            string s1 = q.front();    q.pop();
            string s2 = q.front();    q.pop();
            if(s1.size()==n && s2.size()==n) break;
            q.push(s1 + "6");
            q.push(s1 + "8");
            v.push_back(s1+"6");
            v.push_back(s1+"8");

            q.push(s2 + "6");
            q.push(s2 + "8");
            v.push_back(s2 +"6");
            v.push_back(s2 +"8");
        }
        for(int i = v.size() - 1; i >= 0; i--){
              cout<<v[i]<<" ";
        }
        cout<<endl;

    }
}