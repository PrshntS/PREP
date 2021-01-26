#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
/*#define max INT_MAX
#define min INT_MIN*/
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t; cin >> t;
	while (t--)
	{
		ll n, m;
		cin >> n >> m;
		char a[n][m];
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		ll ans1 = 0, ans2 = 0;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < m; j++)
			{
				if (((i + j) % 2 == 0) && a[i][j] == '.')
				{
					ans1++;
				}
				else if (((i + j) % 2 == 1) && a[i][j] == '*')
				{
					ans1++;
				}
			}
		}
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < m; j++)
			{
				if (((i + j) % 2 == 0) && a[i][j] == '*')
				{
					ans2++;
				}
				else if (((i + j) % 2 == 1) && a[i][j] == '.')
				{
					ans2++;
				}
			}
		}
		ll total = n * m;
		if (total % 2 == 0)
		{
			cout << min(ans1, ans2) << endl;
		}
		else
		{
			cout << ans1 << endl;
		}

	}


	return 0;
}