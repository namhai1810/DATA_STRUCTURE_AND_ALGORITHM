

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
         int n,e;
        cin>>n>>e;
        vector<int>ke[1001];
        for(int i=1;i<=e;i++)
        {
            int u,v;
            cin>>u>>v;
            ke[u].push_back(v);
        }
        for(int i=1;i<=n;i++)
        {
            sort(ke[i].begin(),ke[i].end());
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i<<": ";
            for(int j=0;j<= ke[i].size()- 1;j++)
            {
                cout<<ke[i][j]<<" ";
            }
            cout<<endl;
        }
    }   
}