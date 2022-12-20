#include<bits/stdc++.h>
using namespace std;
// chuyen nhi phan sang gray
int main(){
    int t; cin >>t;
    while(t--){
        string s;
        cin >> s;

      string bina ="";
      bina += s[0];
      int e = 0;
        for(int i = 1; i <s.size(); i++){
            
            if(bina[e++] != s[i] ) bina+="1";
            else bina += "0";
        }
        cout<<bina<<endl;
    }
}