#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t; cin.ignore();
    while(t--){ 
        string s; getline(cin, s);
        map<char, long long> mp;
        int mark = 1;
        if(s.length() %2 != 0){
        for(int i=0;i<s.length();i++){ 
            mp[s[i]]++;
            if(mp[s[i]] > s.length()/2 +1){ mark =0; break; }
        }}
        else{
            for(int i=0;i<s.length();i++){ 
            mp[s[i]]++;
            if(mp[s[i]] > s.length()/2){ mark =0; break; }
        }
        }
        if(mark == 1) cout<<"1"<<endl;
        else cout<<"-1"<<endl;

    }
}