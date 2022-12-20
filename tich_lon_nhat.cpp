#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    int a[n + 5];
    for(int i = 0; i < n; i++){cin >> a[i];}
    sort(a,a+n);
    long long m = max(a[0] * a[1], a[n-1] * a[n-2]);
    long long k = max(a[0] * a[1] * a[n-1], a[n-1] * a[n-2]* a[n-3]);
    cout<<max(m,k)<<endl;
}