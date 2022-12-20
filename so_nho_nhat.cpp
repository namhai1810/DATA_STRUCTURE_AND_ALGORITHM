#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int s,d; cin >>s>>d;
        int a[d+5];
        for(int i = 0; i < d; i++){a[i] = 0;}
        if(s > 9 * d) cout<<"-1"<<endl;
        else{
            s-=1;
            for(int i = d-1; i >= 0; i--){
                if(s>9){
                    a[i] = 9;
                    s-=9;
                }else{
                    a[i] = s;
                    break;
                }
            }
            a[0] += 1;
            for(int i = 0; i < d; i++){
                cout<<a[i];
            }
            cout<<endl;
        }
    }
}