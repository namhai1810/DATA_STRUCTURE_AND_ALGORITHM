#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        int k;
        string a,b;
        cin >> k >> a >>b;
        while(a.size() > b.size()) b= "0" + b;
        while(b.size() > a.size()) a = "0" + a;
        int len = a.length() - 1;
        string ans = "";
        int nho = 0;
        for(int  i =  len; i >= 0; i--){
            int  sum = int(a[i] - '0') + int(b[i] - '0') + nho;	
            ans = char(((sum%k) + '0')) + ans;
            nho = sum/k;
        }
        if(nho > 0){
            ans = char((nho + '0')) + ans;
        }
        cout<<ans<<endl;
    }
}