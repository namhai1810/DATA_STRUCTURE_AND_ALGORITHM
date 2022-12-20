#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        queue<string> q;
        q.push("0");
        q.push("1");
        
        while(n!= 2){
            n--;
            string s = q.front(); q.pop();
            string s1 = q.front(); 
            // cout<<s<<" " <<s1<<" ";
            q.push(s+s1);
        }
        // cout<<endl;
        q.pop();    
        string s2 = q.front();

       cout<<s2[m-1]<<endl;

    }
}