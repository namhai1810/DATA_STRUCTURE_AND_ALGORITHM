#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
   return a.second < b.second;
}
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            pair<int,int> p;
            cin >> p.first>>p.second;
            v.push_back(p);
        }
        sort(v.begin(), v.end(),cmp);
        int cnt = 1;

        int en = v[0].second;
        for(int i = 1; i < n; i++){
            if(v[i].first >= en){
                cnt++;
                 en = v[i].second;
            }
        }
        cout<<cnt<<endl;
    }
}