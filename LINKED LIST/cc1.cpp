#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int fact(int x)
{
	if (x == 1 || x == 0)
	{
		return 1;
	}
	return x * fact(x - 1);
}
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
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		vector<vector<int>> m(y2 + 1, vector<int>(x2 + 1, 0));
		m[1][1] = 1;
		for (int i = 2; i <= y2; i++)
		{
			m[i][1] = m[i - 1][1] + i;
		}
		for (int i = 1; i <= y2; i++)
		{
			for (int j = 2; j <= x2; j++)
			{
				m[i][j] = m[i][j - 1] + (i - 1) + (j - 1);
			}
		}

		for (int i = x1 + 1; i <= x2; i++)
		{
			m[y1][i] += m[y1][i - 1];
		}
		for (int i = y1 + 1; i <= y2; i++)
		{
			m[i][x1] += m[i - 1][x1];
		}
		for (int i = y1 + 1; i <= y2; i++)
		{
			for (int j = x1 + 1; j <= x2; j++)
			{
				m[i][j] += max(m[i - 1][j], m[i][j - 1]);
			}
		}

		cout << m[x2][y2] << endl;

	}


	return 0;
}