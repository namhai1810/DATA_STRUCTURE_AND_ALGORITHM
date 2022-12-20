#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    int a[n+5];
    for(int i = 0; i < n; i++){cin >> a[i];}
    for(int i = 0; i < n; i++){
        int mark = 0;
        for(int j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){ mark = 1; swap(a[j], a[j+1]);}
        }
        if(mark == 1){
            cout<<"Buoc "<<i+1<<": ";
            for(int k = 0; k < n; k++){cout<<a[k]<<" ";}
            cout<<endl;
        }
    }
}