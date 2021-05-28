#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string str; cin >> str;
		set<char> s;
		char last;
		s.insert(str[0]);
		last = str[0];
		bool flag = false;
		for (int i = 1; i < n; i++)
		{
			if (last != str[i])
			{
				if (s.find(str[i]) == s.end())
				{
					s.insert(str[i]);

				}
				else
				{
					flag = true;
				}
			}

			last = str[i];
		}
		if (flag)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}


	return 0;
}