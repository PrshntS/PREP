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
	bool flag = false;
	while (t--)
	{
		int n;
		cin >> n;
		set<char> s;
		cout << 1;
		string str; cin >> str;
		for (int i = 0; i < n - 1; i++)
		{
			if (str[i] == str[i + 1])
			{
				if (s.find(str[i]) == s.end())
				{
					s.insert(str[i]);
				}
			}
			else
			{
				if (s.find(str[i]) != s.end())
				{
					flag = true;
				}
				else
				{
					s.insert(str[i]);
				}
			}
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