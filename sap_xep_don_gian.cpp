#include<bits/stdc++.h>
using namespace std;
int main(){ 
        int t; cin>>t;
        int a[t + 5];
        int F[100001];
        int m=0;
        // tu 1 den n theo thu tu ngau nhien
        for(int i = 0; i <t;i++) {cin >>a[i];F[i] =0;}
        for(int i = 0; i <t; i++){
             F[a[i]] =F[a[i]-1]+1;// cung la qhd nhung no ko phải chạy thêm vòng lặp nhờ đề bai
             // chính vì vậy thay vì xét ptu lớn hơn hay như kia
             // ta chỉ cần xét cái sau njos
            m = max(m,F[a[i]]);
        }
        cout<<t-m<<endl;
}
