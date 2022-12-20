#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        long long k; cin >> k;
        long long a[k+5];
        for(int i=0; i<k; i++){cin >> a[i];}
        sort(a,a+k);
        for(int i=0; i<k; i++){cout<< a[i]<<" ";}
        cout<< endl;

    }
}