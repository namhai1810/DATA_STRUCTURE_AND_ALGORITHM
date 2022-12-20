#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[10002];
int stop = 1;
vector<string> v;
void sinh(){
     int idx = k;
    while(idx >= 1 && a[idx] == v.size()-1 - k + idx) idx--;
    // max tại v.size-1 do t push them 0 ở đầu
    if(idx == 0) {stop = 0; return;}
    a[idx]++;
    for(int i = idx +1; i<=v.size()-1;i++) a[i] = a[i-1] +1;
}
int main(){
    cin >> n >> k;
    cin.ignore();
    string s; 
    getline(cin, s);
    stringstream ss(s);
    set<string> se;
    string x;
    while(ss >>x){
        se.insert(x);
    }
    v.push_back("0");
    for(string x : se) v.push_back(x);
    // for(int i = 0; i < v.size()-1; i++) cout << v[i] << " ";
    // cout<<v.size()-1 << endl;
    for(int i = 1; i<= v.size()-1; i++){a[i] = i;}
    // v.size() - 1 do ta đã push thêm số 0 vào
    // bên cạnh đó t phải trừ đi phần tử mà bị lặp
    while(stop == 1){
        for(int i = 1; i <= k; i++){
            cout<<v[a[i]]<<" ";
        }
        sinh();
        cout<<endl;
    }
    
}