#include<bits/stdc++.h>
using namespace std;
int n;
int a[100],b[100];
vector<string> v;
int dem = 0;
int stop = 1;
void sinh(){
    int idx = n;
    while(idx >= 1 && b[idx] == 1) idx--;
    if(idx==0) {stop =0; return;}
    b[idx] = 1;
    for(int i = idx +1; i<=n; i++) {b[i] =0;}

}
void check(){
    string s = "";// day la so be nhat
    bool cnt = true;
    dem = 0;
    int ct = 0;
    for(int i = 1; i <= n; i++) {
        if(b[i] == 1){
            if(s.size() == 1){ 
                string k = to_string(a[i]);
                s += k;
                s += " ";
                dem = i;
                ct++;
            }else{
                if(a[i] > a[dem]){
                     string k = to_string(a[i]);
                    s += k;
                    s += " ";
                    dem = i;
                    ct++;
                }
                 else { cnt = false; break;}
            }
        }
    }
    
    if(cnt ==  true && ct>=2) {v.push_back(s); }
    //cout<<s<<" "<<s.size()<<endl; chú ý điều kiện s.size() sẽ bị hổng số 11
    // do có 3 phần tử
}
int main(){ 
        cin >>n;
        for(int i=1; i<=n; i++){cin >>a[i]; b[i] = 0;}

        while(stop == 1){
            sinh();
            check();
        }

        sort(v.begin(),v.end());
        // cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++){cout<<v[i]<<endl;}
    }
