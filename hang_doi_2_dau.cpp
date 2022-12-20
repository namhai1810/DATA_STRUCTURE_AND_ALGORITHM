#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    cin.ignore();
    deque<int> dq;
    while(t--){
        string s,x;
        getline(cin,s);
        stringstream ss(s);
        ss >> x;
        if(x == "PUSHFRONT"){
            ll a;
            ss >> a;
            dq.push_front(a);
        }
        else if(x == "PRINTFRONT"){
            if(!dq.empty()){
                cout<<dq.front()<<endl;
            }
            else cout<<"NONE\n";
        }
        else if(x == "POPFRONT"){
            if(!dq.empty()){
                dq.pop_front();
            }
        }
        else if(x == "PUSHBACK"){
            ll a;
            ss >> a;
            dq.push_back(a);
        }
       
         else if(x == "PRINTBACK"){
            if(!dq.empty()){
                cout<<dq.back()<<endl;
            }
            else cout<<"NONE\n";
        }
        else if(x == "POPBACK"){
            if(!dq.empty()){
                dq.pop_back();
            }
        }
    }
}