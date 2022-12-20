#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> v;
bool check(string s){
    if(s[4] == '0' || (s[0] == '0' && s[1] == '0') || (s[2] == s[3]) || s[2] == '2' ) return false;
    return true;

}

bool cmp(string a, string b){
    if(a < b) return true;
    return false;
}
void backTrack(int i, string s = ""){
    for(int j = 1; j <= 2; j++){
        if(i == 8){
                for(int k = 0; k < s.size(); k++){
                    if(s[k] == '1') s[k] = '0';
                }
                if(check(s) )  v.push_back(s);
                break;
        } 
        else backTrack(i + 1,s +  to_string(j));
    }
}

int main(){
    backTrack(0);
    sort(v.begin(),v.end(),cmp);
    // cout<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++){
        v[i].insert(v[i].begin() + 2, '/');
        v[i].insert(v[i].begin() + 5, '/');
        cout<<v[i]<<endl;
    }
}