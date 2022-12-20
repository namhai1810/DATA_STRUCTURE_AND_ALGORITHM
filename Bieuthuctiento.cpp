#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int soluong;
        cin>>soluong;
        string a,x;
        getline(cin>>ws,a);
        stack<long long>st;
        stringstream tmp(a);
        vector<string>vt;
        while(tmp>>x)
        {
            vt.push_back(x);
        }
        for(int i=vt.size()-1;i>=0;i--)
        {
            if(vt[i].size()==1)
            {
                if(vt[i]=="+"||vt[i]=="-"||vt[i]=="*"||vt[i]=="/")
                {
                    long long temp1=st.top();st.pop();
                    long long temp2=st.top();st.pop();
                    if(vt[i]=="+") st.push(temp1+temp2);
                    else if(vt[i]=="-") st.push(temp1-temp2);
                    else if(vt[i]=="*") st.push(temp1*temp2);
                    else if(vt[i]=="/") st.push(temp1/temp2);
                }
                else
                {
                    st.push(stoll(vt[i],0,10));
                }
            }
            else
            {
                if(vt[i][0]=='-')
                {
                    vt[i].erase(vt[i].begin());
                    long long temp=stoll(vt[i],0,10);
                    st.push(-temp);
                }
                else
                {
                    long long temp=stoll(vt[i],0,10);
                    st.push(temp);
                }
            }
        }
        cout<<st.top()<<endl;
    }
}