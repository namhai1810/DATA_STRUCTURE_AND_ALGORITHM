#include<bits/stdc++.h>
using namespace std;    
int main(){
    long long n; cin >>n;
    while(n--){ 
        long long k; cin >>k;
        cin.ignore();
        string s; getline(cin, s);
        
        set<int> se;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
            s[i] = s[i]-'0';      
            se.insert(s[i]);
            }
        }
       for(int x :se) {
           cout<<x<<" ";
       }
        cout<<endl;
    }
}