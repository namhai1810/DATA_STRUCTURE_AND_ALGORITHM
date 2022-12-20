#include<bits/stdc++.h>
using namespace std;
int t;
string s;
bool check(string s){
    if(s[t-1] != '6') return false ;
    for(int i = 0; i < s.size()-1; i++){
        //cout<<1<<endl;
        if(s[i] == s[i+1] && s[i] =='8') return false ;
    }
    for(int i = 0; i < s.size()-2; i++){
       // cout<<2<<endl;
        if(s[i] == s[i+1] && s[i] =='6' && s[i] == s[i+2]&& s[i] == s[i+3]) return false ;
    }
    return true;

}
void Try(string s){
    if(s.size() == t){
        if(check(s)) {cout<<s<<endl;}
    }else{
        Try(s +"6");
        Try(s + "8");
    }
}
int main(){
    cin >>t;
    Try("8");
}