#include<bits/stdc++.h>
using namespace std;
char x;
char a[100];
int n;
void print(){
    for(int i = 0; i <n; i++) cout<<a[i];
    cout<<endl;
}
void backTrack(int i, char e){
    for(int j = e; j <= x;j++){
        a[i] = j;
        if(i == n-1){print();}
        else{
            backTrack(i+1,a[i] );
        } 
    } 
}
int main(){
    cin >> x;
    cin >> n;
    backTrack(0,'A');
}