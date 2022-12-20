#include<bits/stdc++.h>
using namespace std;
int stop = 1;
int n,k; 
// giong dat ten 2
int b[1000];
   vector<int> v;
void sinh(){
    int idx = k;
    while(idx >= 1 && b[idx] == v.size() - k-1 +idx) idx--;
    if(idx == 0){ stop = 0; return;}
    b[idx]++;
    for(int i = idx+1 ; i <= v.size()-1;i++ ) b[i]= b[i-1]+1;
}
int main(){
   cin>>n>>k;
   int a[n+5];
   set<int> se;
   for(int i = 0; i < n; i++){cin >> a[i]; se.insert(a[i]);}
   v.push_back(0);
   for(int x : se) v.push_back(x);
    for(int i = 1; i <= v.size(); i++){b[i] = i;}
    // for(int i = 1; i < v.size(); i++){cout<<v[i]<<" ";}
    // for(int i = 1; i < v.size(); i++){cout<<b[i]<<" ";}
    while(stop == 1){ 
            for(int i = 1; i <= k; i++){
                cout<<v[b[i]]<<" ";
            }
        sinh();
        cout<<endl;
    }

}