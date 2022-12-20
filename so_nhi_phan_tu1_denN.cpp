#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; 
        cin >>n;
        queue<string> q;
        q.push("1");
        cout<<q.front()<<" ";
        int i =2;
        //co the dung mang luu
        while(1){
            string s = q.front();
            s+="0";
            cout<<s<<" ";
            i++;
            q.push(s);
            if(i>n) break;
            string s1 = q.front();
            s1+="1";
            cout<<s1<<" ";
            q.push(s1);
            q.pop();
            i++;
            if(i>n) break;
        }
        cout<<endl;
    }

}