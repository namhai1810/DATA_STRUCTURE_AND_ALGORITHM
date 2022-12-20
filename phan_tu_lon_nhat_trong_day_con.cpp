#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k; 
        ll a[n];
        for(int i=0;i<n;i++) cin >>a[i]; 
        long long m = 0;
        ll mark =0 ;
       
        for(int i = 0 ; i < n-k+1 ; i++){
            if(i==0 || mark<i){
                m = 0;
                for(int j = i; j < i+k;j++){
                    if(a[j] >m){ 
                        m = a[j];
                        mark = j;
                    }
                }
             }
             else{
                if(i>0 && mark >= i && a[i+k-1] > m){
                    m= a[i+k-1];
                    mark = i+k-1;
                }
             }
             cout<<m<<" ";
        } 
        cout<<endl;
    }
}