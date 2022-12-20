#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i = 0; i < n-1; i++){
        int m = a[i];
        int index;
        for(int j = i+1;j<n;j++){
            if(a[j] < m) {index = j; m =a[j];}
        }
        swap(a[i],a[index]);
        cout<<"Buoc "<<i+1<<": ";
        for(int i =0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl; 
    }
}