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
        pair<int,int> p[1001];
        for(int i = 0; i < n; i++){
            cin >> p[i].first;
        }
        for(int i = 0; i < n; i++){
            cin >> p[i].second;
        }
        for(int i = 0; i < n; i++) v.push_back(p[i]);
        sort(v.begin(), v.end(),cmp);
        int cnt = 1;
        int en = v[0].second;
        for(int i = 1; i < v.size(); i++){
            if(v[i].first >= en){
                cnt++;
                en = v[i].second;
            }
        }
        cout<<cnt<<endl;
    }
}