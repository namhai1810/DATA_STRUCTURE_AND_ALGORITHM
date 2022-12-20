#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int idx = -1;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '1') {idx = i;  break;}
        }
       if(idx != -1){ s[idx] = '0';
        for(int i = idx+1; i< s.length(); i++){ s[i] = '1';}
        cout<<s;
       }
       else{
            for(int i = 0; i <s.size(); i++){cout<<'1';}
       }
            cout<<endl;

    }
}