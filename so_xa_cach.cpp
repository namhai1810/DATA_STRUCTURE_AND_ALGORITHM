#include<bits/stdc++.h>
using namespace std;
int n;
int a[101];
bool visited[100];
void print(){
    for(int i = 1; i <=n; i++) cout<<a[i];
    cout<<endl;
}
bool check(){
    for(int i = 1; i <= n; i++){
        if(abs(a[i] - a[i-1]) == 1 || abs(a[i+1] - a[i]) == 1) return false;
    }
    return true;
}
void backTrack(int i){
    for(int j = 1; j <=n;j++){
       if(visited[j] == false){
        visited[j] = true;
        a[i] = j;
        if(i == n){ 
            if(check()) print();
        }
        else backTrack(i+1);
        visited[j] = false;
       }
    }
}
int main(){
    int t; cin >>t;
    while(t--){
        for(int i = 0; i <= 100; i++){ a[i] =i;}
        // so no bi khoang cach -1
        memset(visited, false, sizeof(visited));
        cin >> n;
        if(n == 3 ) {cout<<endl; continue;}
        else{   
            while(next_permutation(a + 1, a+ n + 1)){
                 if(check()) print();
            }
        }
        cout<<endl;
    }
}