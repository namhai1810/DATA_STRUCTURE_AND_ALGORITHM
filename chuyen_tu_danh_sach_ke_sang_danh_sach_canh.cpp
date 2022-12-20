#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int,int> a,pair<int,int> b) {
    if(a.first > b.first) return false;
    if(a.first ==  b.first && a.second > b.second) return false;
    return true;
}
int main(){
    int t; cin >>t;
    cin.ignore();
    vector<pair<int,int> > v;
    for(int i = 1; i <= t; i++){
        string s; getline(cin,s);
        string num;
        stringstream ss(s);
        while(ss>>num){
           if(stoi(num) >i){
               v.push_back({i,stoi(num)});
           }
        }

    }
       
    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second<<endl;
    }
}