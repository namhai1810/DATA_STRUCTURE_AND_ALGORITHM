#include<bits/stdc++.h>
using namespace std;
int n;
int cnt;
int x[100];
//(i,j) quan ly cot i hang j va duong cheo xuoi i-j+N va duong cheo nguoc i+j-1
bool cot[100], d1[100], d2[100];
void BackTrack(int i){
    for(int j = 1; j <= n; j++){
        if(!cot[j] && !d1[i-j+n] & !d2[i+j-1]){
            x[i] = j;
            cot[j] = d1[i-j+n] =d2[i+j -1] = 1;
            if( i == n) {for(int i = 1; i <=n; i++) cout<<x[i]<<" "; cout<<endl;}
            else BackTrack(i+1);
            cot[j] = d1[i-j+n] =d2[i+j -1] = 0;

        }
    }
}
int main(){
    int t; cin >>t;
    while(t--){
        memset(cot,0,sizeof(cot));
        memset(d1,0,sizeof(d1));
        memset(d2,0,sizeof(d2));
        cin >>n;
        cnt = 0;
        BackTrack(1);
        cout<<cnt<<endl;
    }
}