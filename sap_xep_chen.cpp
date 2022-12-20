#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    int a[n+5];
    for(int i=1; i<=n; i++){ cin >>a[i]; }
    int x[n+5];
    for(int i = 1; i <= n; i++){
        int pos = i -1;
        int k  = a[i];
        while(pos >= 1 && k < x[pos]){ x[pos+1] = x[pos]; pos--;}
        x[pos+1] = k;
         cout<<"Buoc "<<i-1<<": ";
        for(int j =1;j<=i;j++) cout<<x[j]<<" ";
        cout<<endl;
    }
}