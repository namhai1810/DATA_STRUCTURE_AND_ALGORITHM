#include<bits/stdc++.h>
using namespace std;
long long sum;
bool check;
int n,k;
bool visited[1000] ={false};
int a[1000];
int cnt;
// chu y phai 2 tong bang 2
void backTrack(int s = 0 , int cnt=0 ){
    if(check ==  true) return;
    if(cnt == k){
        check =true;
        return;
    }
    for(int i = 0; i < n; i++){
        if(visited[a[i]] == false){
            visited[a[i]] = true;
            if(s + a[i] == sum) {backTrack(0,cnt+1);}
            else if(s > sum  ) return;
            else backTrack(s + a[i], cnt);
        }
            visited[a[i]] = false;


    }
}

int main(){
    int t; cin >>t;

    while(t--){ 
        memset(visited, false, sizeof(visited));
        sum = 0;
        check = false;
        cin >> n;
        int  k =2;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % k != 0) cout<<"NO"<<endl;
        else{
            sum /= k;
            backTrack();

            if(check == true){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
    }
}