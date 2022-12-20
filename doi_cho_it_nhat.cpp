#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int a[n+5];
        for(int i = 0; i < n; i++){ cin >>a[i]; }
        int dem = 0;
        for(int i = 0; i < n; i++){ 
            int idx = 0;
            int m = a[i];
            for(int j = i+1; j < n; j++){
                if(m > a[j]){
                    m = a[j];
                    idx = j;
                }
            }
            if(a[i] > m){
                dem++;
                swap(a[i], a[idx]);
            }
        }
        cout<<dem<<endl;
    }
}