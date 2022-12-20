
// đơn đồ thị
// đa đồ thị
// giả đồ thị vô hướng
// đa đồ thị có hướng
// đỉnh kề, cạnh liên thuộc
// bậc của đỉnh : đồ thị vô hướng
// ban bac cua dinh : do thi co huong, ban bac ra, ban bac vao
// duong di , chu trinh
// lien thong thanh phan lien thong: do thi vo huong
// lien thong yeu/ lien thong manh do thi co huong
#include<bits/stdc++.h>
using namespace std;
    int n,m;

int main(){
    int t; cin >>t;
    while(t--){
    vector<int> adj[1001];
    cin >>n>>m;
    for(int i = 0;i<m;i++){
        int x,y; cin >>x>>y;
       adj[x].push_back(y);
       adj[y].push_back(x);
    }
    for(int i = 1; i <=n;i++){ 
        cout<<i<<": ";
        for(int x : adj[i]) cout<<x<<" ";
        cout<<endl;
    }
    }   
}