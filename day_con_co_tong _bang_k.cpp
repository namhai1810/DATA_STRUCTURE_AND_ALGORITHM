#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1002];
int x[1002];
bool check = false;
void print(int idx){
    cout<<"[";
    for(int i = 0; i < idx - 1; i++){
        cout<<x[i]<<" ";
    }
    cout<<x[idx - 1]<<"] ";
}
void backTrack(int i, int idx , int sum = 0){ 
    if(sum > k) return;
    if(sum == k){
        check = true;
        print(idx);
        return;
    }
    for(int j = i; j < n;j++){
        x[idx] = a[j];
        backTrack(j+1,idx +1, sum + a[j]);// j+ 1 nen ko trung
    }
}
int main(){
    int t; cin >>t;
    while(t--){
        check = false;
        cin >>n>>k;
        for(int i = 0; i < n; i++){cin >>a[i];}
        sort(a,a+n);
        backTrack(0,0);
        if(check == false ) cout<<"-1\n";
        cout<<endl;
    }
}