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
		string s;
		cin >> s;
		int ans = 0;
		stack<char> st;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
				st.push(s[i]);
			else
			{
				if (!st.empty())
				{
					ans += 2;
					st.pop();
				}
			}
		}
		cout << ans << endl;
	}
}