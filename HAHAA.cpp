#include<bits/stdc++.h>
using namespace std;
int n;
string s;
bool check(string s){
    int mark =0;
    int tinh = 1;
    if(s[0] == 'H' && s[n-1] == 'A') mark = 1;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == s[i+1] && s[i] == 'H'){tinh = 0; break;} 
    }
    if(mark ==1 && tinh == 1) return true;
    return false;
}
void solve(string s){
        if(s.size() == n){
          if(check(s))
            cout<<s<<endl;
        }
        else {solve(s + "A"); solve(s+"H");
    }

}
int main(){
    int t; cin >>t;

    while(t--){
        cin >> n;
        solve("");
    }
}