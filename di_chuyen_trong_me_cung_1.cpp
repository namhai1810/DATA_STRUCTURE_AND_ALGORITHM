#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
vector<string> v;
bool check = false; 

void back_track(int i ,int j,string s){
    if(i == n-1 && j == n-1 && a[i][j]==1) {
        check  = true;
        v.push_back(s);
        return;
    }
    if(i < n-1 && a[i+1][j] == 1) back_track(i+1,j ,s + "D");
    if(j  < n-1 && a[i][j +1] == 1) back_track(i,j + 1,s + "R");

    if(i <= n-1 && j <=n-1 && (a[i][j+1] == 0 || a[i+1][j] == 0)) return;
    if(i > n-1 || j >n-1) return;

}

int main(){
    int t;cin >>t;
    while(t--){
        cin >>n;
        v.clear();
        memset(a,0,sizeof(a));
        check = false;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >>a[i][j];
            }
        }

        if(a[0][0] == 0 || a[n-1][n-1] == 0){ cout<<"-1\n"; continue;}
        back_track(0,0,"");
        if(check == true){
            sort(v.begin(), v.end());
            for(int i = 0; i< v.size();i++) cout<<v[i]<<" ";
            cout<<endl;
        }
        else cout<<"-1"<<endl;
    }

}