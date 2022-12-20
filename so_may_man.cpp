#include<bits/stdc++.h>
using namespace std;
#define ll long long
// 4*a + 7 * b =n
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int mark = 0;
        for(int i = 0; i <= n/4; i++){
            if((n-4 *i) % 7 == 0 ){
                int k = (n-4 *i) / 7;
                for(int j = 0;  j < i; j++){cout<<"4";}
                for(int j = 0;  j < k; j++){cout<<"7";} 
                mark =1;
                break;
            }
        }
        if(mark == 0)   cout<<"-1";
        cout<<endl;

    }
}