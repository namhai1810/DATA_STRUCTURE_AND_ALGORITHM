#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        string s; cin >> s;
        string ans = "";
        stack<char> st;
        int check = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] =='-' && s[i+1] == '('){
                ans += s[i];
                check = 1;
                continue;
            }
            if(s[i] != ')' && s[i] != '(')ans += s[i];
            // cout<<check;
            if(check == 1){
                for(int j = i+1; j < s.length(); j++){
                    if(check == 1 && s[j] == '-') {s[j] = '+'; continue;}
                    else if(check == 1 && s[j] == '+') {s[j] = '-'; continue;}
                    if(s[j] == '(') check++;
                    if(s[j] == ')') check--;
                    if(check == 0) break;
                }
            }
        }
        cout<<ans<<endl;
        }   
}