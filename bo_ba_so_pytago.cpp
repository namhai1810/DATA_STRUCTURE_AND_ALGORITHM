#include<bits/stdc++.h>
using namespace std;
long long bi(long long a[], long long l,long long r,long long x){
    long long res = -1;
    while(l<=r){
        long long m = (l+r)/2;
        if(a[m] == x){
            res = m;
            return res;
        }
        else{
            if(a[m] > x) r = m-1;
            else l = m+1;
        }
    }
    return res;
}
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++ ){
            cin >>a[i];
            a[i] *=a[i];
        }
        int mark = 0;
        sort(a,a+n);
        for(int i  = n-1 ; i>=2;i--){   
            int l =0, r = i;
            while(l<r){
                if(a[l] + a[r] == a[i]){mark =1; break;}
                else if(a[l] + a[r] < a[i]) l++;
                else r--;
            }
            if(mark == 1) break;
        }
        if(mark == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}