#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){ 
        long long n; cin >>n;
        long long a[n+5];
        long long sum = 0,sum1=0;
        for(int i = 1; i <= n; i++){
            cin>>a[i];
            sum+= a[i];
        }
        int mark = 2,stop =0;
        sum -= a[1];
        sum -= a[2]; // lay diem 2 la trung tam
        sum1 +=a[1];
        if(sum1==sum) cout<<"2"<<endl;
        else{
            while(mark <= n){
                sum1 +=a[mark];
                sum -= a[mark+1];
                if(sum1 == sum){
                    stop = 1;
                    //cout<<sum1<<" ";
                    break;
                }
                mark++;
            }
            if(stop == 0) cout<<"-1"<<endl;
            else cout<<mark+1<<endl;// 
        }
    }

}