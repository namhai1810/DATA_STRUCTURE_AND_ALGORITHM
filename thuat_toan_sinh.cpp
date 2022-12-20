#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    string h = s;
    reverse(h.begin(), h.end());
    if(h == s ) return true;
    return false;
}
int main(){
    int n, stop = 1;
    cin >>n;
    string s = "";
    while(s.size() < n) s +="0";
    for(int i = 0; i < s.size(); i++){ cout<<s[i]<<" ";}
    cout<<endl;
    while(stop == 1){
        int x = s.size() - 1;
        while(s[x] == '1' && x >=0) x--;
        if(x == -1) stop = 0;
        else{
            s[x] = '1';
            for(int i = x+1; i <s.size(); i++){ s[i] = '0'; }
            if(check(s)){
                for(int i = 0; i < s.size(); i++){ cout<<s[i]<<" ";}
                cout<<endl;
            }
        }

    }
}