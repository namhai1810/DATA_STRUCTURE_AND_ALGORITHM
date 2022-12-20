#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){ 
        int n; cin>>n;
        long long a[n+5];
        int min=1000;
        for(int i=0; i<n; i++){cin>>a[i];}
        for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(abs(a[i] + a[j]) < abs(min)){
                    min = a[i] + a[j];
                }
            }
        }
        cout<<min<<endl;


    }
}