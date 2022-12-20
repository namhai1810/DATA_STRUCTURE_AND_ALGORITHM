#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        ll a[n+5];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        a[0] = 1e6 + 1;
        int check = 0, ans = 0;
        int dem = 0;
        int mark = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] < a[i+1]){
                mark = i;
                break;
            }
        }
        // cout<<a[mark] <<" "<<mark<<endl;
        for(int i = mark; i <= n; i++){
            if(a[i] < a[i+1]){
                if(check == 0){
                    dem++;
                }
                if(check == 1){
                    ans = max(dem+1,ans);
                    dem = 1;
                    check = 0;
                }
            }
            else{
                if(a[i] > a[i+1]){
                    if(check == 0){
                        check = 1;
                        dem++;
                    }else{
                        if(check == 1){
                            dem++;
                        }
                    }
                }
            }
           
            // cout<<dem<<" ";
        }
        ans = max(dem,ans);
        cout<<ans<<endl;
    }
}