#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("1");
        while(q.size() != 0){
            string top = q.front();
            if(stoll(top) % n == 0){
                cout<<top<<endl;
                break;
            }
            q.push(top + "0");
            q.push(top + "1");
            q.pop();
        }
    }
}