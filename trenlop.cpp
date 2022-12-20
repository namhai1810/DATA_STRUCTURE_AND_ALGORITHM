#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        stack<char> st1;//()
        stack<char> st2; // []
        stack<char> st3; //{}
        int mark1 = 0, mark2 = 0, mark3 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')' && st1.size() == 0) break;
            if(s[i] == ']' && st2.size() == 0) break;
            if(s[i] == '}' && st3.size() == 0) break;

            if(s[i] == '(') {st1.push('('); mark1 = 1;}
            else if(s[i] == ')' ) st1.pop();
            if(s[i] == '[') {st2.push('['); mark2 = 1;}
            else if(s[i] == ']') st2.pop();
            if(s[i] == '{') {st3.push('{'); mark3 = 1;}
            else if(s[i] == '}') st3.pop();
        }
        if(st1.size() ==0 && st2.size() == 0 && st3.size() == 0 && mark1 == 1 && mark2 == 1 && mark3 == 1) 
        cout<<"YES\n";
        else cout<<"NO\n";

    }
}