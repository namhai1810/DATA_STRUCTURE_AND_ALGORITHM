    #include<bits/stdc++.h>
    using namespace std;
    vector<long long> res;
    int main(){
        long long t; cin >>t;
        queue<string> q;
        q.push("9");
        res.push_back(9);// chu y phai check ca 9
            while(1){
                string s =  q.front() + "0";
                if(s.length() == 13  ) break;
                stringstream ss(s);
                long long k; ss>>k;
                res.push_back(k);
                string s1 =  q.front() + "9";
                stringstream ss1(s1);
                long long h; ss1 >> h;
                res.push_back(h);
                q.pop();
                
                q.push(s);
                q.push(s1);
            }
            long long ans[1000];
            for(int i = 1; i <= 100;i++){
                for(long long x : res)
                    if(x % i == 0){ ans[i] = x; break;}
            }
        while(t--){
            long long n;
            cin >> n;
            cout<<ans[n]<<endl;
        }
    }