#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<long long, long long> a, pair<long long, long long> b){
    return a.second > b.second;
}
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        map<int,int> mp;
        bool visited[2000];
        memset(visited, 0, sizeof(visited));
        int jo, de,pro;
        vector<pair<int,int> > v;
        for(int i = 0; i < n; i++){
            cin >>jo >> de >>pro;
            v.push_back({de,pro});
        }
        sort(v.begin(),v.end(),cmp);
        ll sum = 0, cnt = 0;
        int k = n -1;
        for(int i = 0; i <n ; i++){
            while(visited[v[i].first] && v[i].first > 0 ) {v[i].first -= 1;};
            if(!visited[v[i].first] && v[i].first > 0){
                visited[v[i].first] = true;
                sum += v[i].second;
                cnt++;
            }

        }
        
        cout<<endl;
        cout<<cnt<<" "<<sum<<endl;
    }
}