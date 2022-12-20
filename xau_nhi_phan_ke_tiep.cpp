#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
    string s;
    cin >>s;
    int x = s.size() - 1;
    while(s[x] == '1' && x >=0) x--;
    if(x == -1){  for(int i = 0; i < s.size(); i++){ cout<<0;}}
    else{
        s[x] = '1';
        for(int i = x+1; i <s.size(); i++){ s[i] = '0'; }
            for(int i = 0; i < s.size(); i++){ cout<<s[i];}
    }
     
     cout<<endl;
}
}