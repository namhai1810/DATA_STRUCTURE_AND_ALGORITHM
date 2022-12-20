    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    long long t; cin >>t;
    cin.ignore();
        stack<long long> st1;
        while(t--){
            string s;
            getline(cin, s);
            stringstream ss(s);
            string x;
            ss >> x;
            long long x1;
            if(x == "PUSH"){ ss >> x1; st1.push(x1); }
            if(x ==  "POP" && st1.size() > 0 ){st1.pop();}
            if(x == "PRINT"){
                if(st1.size() == 0 ) cout<<"NONE"<<endl;
                else{
                    vector<int> v;
                    cout<<st1.top()<<endl;

                }
            }
        }
    }