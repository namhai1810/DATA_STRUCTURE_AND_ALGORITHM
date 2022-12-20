#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        priority_queue<int,vector<int>, greater<int> > pq;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            pq.push(x);
        }
        long long sum = 0;
        while(pq.size() != 1){ 
            int f = pq.top();
            pq.pop();
            int s = pq.top();
            pq.pop();
            sum += f +s;
            pq.push(f+s);
        }
        cout<<sum <<endl;
    }
}