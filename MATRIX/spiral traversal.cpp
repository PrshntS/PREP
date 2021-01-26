#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define max INT_MAX
#define min INT_MIN
print(ll r, ll c, vector<vector<ll>> a)
{
	ll fr = 0, fc = 0;
	while (fr < r && fc < c)
	{
		for (ll i = fc; i < c; i++)
		{
			cout << a[fr][i];
		}
		fr++;
		for (ll i = fr; i < r; i++)
		{
			cout << a[i][c - 1];
		}
		c--;
		if (fr < r)
		{
			for (ll i = c - 1; i >= fc; i--)
			{
				cout << a[r - 1][i];
			}
			r--;
		}
		if (fc < c)
		{
			for (ll i = r - 1; i <= fr; i--)
			{
				cout << a[fc][i];
			}
			fc++;
		}
	}


}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll m, n;
	cin >> m >> n;
	vector<vector<ll>> a(m, vector<ll> (n, 0));
	for (ll i = 0; i < m; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	print(m, n, a);
	return 0;
}