#include<bits/stdc++.h>
using namespace std;
int main(){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string s1; ss >> s1;// nho nhat
        string s2; ss >> s2;
        string s11 = s1;
        string s22 = s2;// lon nhat
        for(int i = 0; i < s1.size(); i++){ 
            if(s1[i] == '6' ) s1[i] = '5';
            if(s11[i] == '5') s11[i] = '6';
        }
        for(int i = 0; i < s2.size(); i++){ 
            if(s2[i] == '6' ) s2[i] = '5';
            if(s22[i] == '5') s22[i] = '6';
        }
         long long k1,k2,k11,k22;
        stringstream ss1(s1); ss1 >> k1;
        stringstream ss2(s2); ss2 >> k2;
        stringstream ss11(s11); ss11>> k11;
        stringstream ss22(s22); ss22 >> k22;
        cout<<k1 + k2<<" "<< k11 + k22;

    }