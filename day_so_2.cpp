#include<bits/stdc++.h>
using namespace std;
int n;
int a[1001];
int b[100][100];
stack<int> st; //Last in first out

void backtrack(int i, int idx = 0){
    a[idx] = a[i] + a[i+1];
    if(i == n){
        for(int j=n-1; j>=0; j--) st.push(a[j]);// chu y doan dao nguoc lai de in dung de bai
    }else backtrack(i+1, idx+1);
}
int main(){
    int t; cin >>t;
    while(t--){
        cin >>n;
        for(int i =0; i < n; i++){cin >>a[i];}
        for(int j=n-1; j>=0; j--) st.push(a[j]);// chu y doan dao nguoc lai de in dung de bai
        int k =n;
        while(n!= 1){
            n--;
            backtrack(0);
        }   
        while(k--){
            cout<<"[";
            for(int i = 0; i<n-1;i++){cout<<st.top()<<" "; st.pop();}
            cout<<st.top()<<']'<<" "; 
            st.pop();
            n++;        
        }
        cout<<endl;
    }
}