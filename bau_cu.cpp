#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int m, n;
    cin >> m >> n;
    int a[m+5], b[n+1] = {0},c[n+1] = {0};
    // vector<pair<int,int>> v;
    for(int i=0; i < m; i++){
        cin >> a[i];
        b[a[i]]++;
        c[a[i]]++;
    }
    sort(c+1,c+n+1,greater<int>());
    int mark = 0, index;
    for(int i=1; i < n; i++){
        if(c[i] > c[i+1] && c[i+1] != 0){
            mark = 1;
            index = i+1;
            break;
        }
    }
    if(mark == 0) cout<<"NONE\n";
    else{
    // for(int i=1; i <= n; i++) cout<<c[i]<<" ";
    // cout<<endl;
    //     cout<<c[index]<<" "<<index<<endl;
        for(int i=1; i <= n; i++){
            if(b[i] == c[index]){
                cout<<i<<endl;
                break;
            }
        }
    }
    
    

}