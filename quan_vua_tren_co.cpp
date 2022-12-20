#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a,b;
int c,d; 
int dem = 0, check = INT_MAX;
bool visited[10][10];
pair<int, int> p[8] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1},{1,-1}, {1,0} , {1,1}};
void backTrack(int i, int j,int dem){
    if(i == c && j == d && visited[i][j] == 1){
        cout<<i<<j<<endl;
        check = min(dem,check);
        dem = 0;
        return;
    }
    for(int k = 0; k < 8;k++){
        int i1 = i + p[k].first;
        int i2 = j + p[k].second;
        if(i1 <= 8 && i2 <= 8 && i1 >= 1 && i2 >= 1 && visited[i1][i2] == 0){
            visited[i1][i2] = 1;
            backTrack(i1,i2,dem+1);
            visited[i1][i2] = 0;
        }
    }
}
int main(){
    cin >>a >>b;
    cin >>c >>d;
    memset(visited,0,sizeof(visited));
    // cout<<a<<b<<c<<d;
    backTrack(a,b,0);
    cout<<check<<endl;
}