#include<bits/stdc++.h>
using namespace std;
char x;
int n;
char a[100];
bool visited[1000];
void print(){
    for(int i = 0; i <n; i++) cout<<a[i];
    cout<<endl;
}
bool check(){
    for(int i = 1; i <n-1; i++){
    if((a[i] == 'A' || a[i] == 'E') &&(a[i+1] != 'A' && a[i+1] != 'E') && (a[i-1] != 'A' && a[i-1] != 'E')){
          return false;
        }
    }
    return true;
}
void backTrack(int i, char e = 'A'){
    for(int j = e; j <= x;j++){
        if(!visited[j]){
            a[i] = j;
            visited[j] = true;
            if(i == n-1){
              if(check() == true)
                print();
            }
            else backTrack(i+1);
            visited[j] = false;
        } 
    }
}   
int main(){
    memset(visited,false,sizeof(visited));
    cin >> x;
    n = x - 'A'+1 ;
    backTrack(0);
}