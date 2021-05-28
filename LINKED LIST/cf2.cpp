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
		int ans = 0;
		int n; cin >> n;
		vector<int> v(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		set<int> s;
		for (int i = 0; i < n; i++)
		{
			int p = v[i] - i;
			if (s.find(p) == s.end())
			{
				s.insert(p);
			}
			else
			{
				ans++;
			}
		}
		cout << ans << endl;
	}


	return 0;
}