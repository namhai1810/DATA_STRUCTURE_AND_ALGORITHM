
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        string s;
        cin >> s;
        stringstream ss(s);
        vector<char> v;
        char x;
        while(ss >> x) v.push_back(x);
        for(int i = 0; i < v.size(); i++) cout<<v[i];
        cout<<" ";

        while(next_permutation(v.begin(), v.end())){
            for(int i = 0; i < v.size(); i++) cout<<v[i];
            cout<<" ";

        }
        cout<<endl;
    }

}