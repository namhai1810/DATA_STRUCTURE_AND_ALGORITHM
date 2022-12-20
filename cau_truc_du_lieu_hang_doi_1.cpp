#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        deque<int> st;
        while (n--)
        {
            cin >> x;
            if (x == 1)
                cout << st.size() << endl;
            else if (x == 2)
            {
                if (st.empty())
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if (x == 3)
            {
                cin >> x;
                st.push_back(x);
            }
            else if (x == 4)
            {
                if (st.size())
                    st.pop_front();
            }
            else if (x == 5)
            {
                if (st.size())
                    cout << st.front() << endl;
                else
                    cout << -1 << endl;
            }
            else if (x == 6)
            {
                if (st.size())
                    cout << st.back() << endl;
                else
                    cout << -1 << endl;
            }
        }
    }
}