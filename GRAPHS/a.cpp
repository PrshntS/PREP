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
	vector<vector<int>> a{{0, 0, 0, 1, 1}, {1, 1, 1, 0, 1}, {0, 1, 1, 1, 0}, {0, 0, 1, 0, 0}, {1, 1, 1, 1, 1}} ;
	vector<vector<int>> dp(5, vector<int>(5, 0));
	dp[0][0] = a[0][0] ? 1 : 0;
	for (int i = 1; i < 5; i++)
	{
		if (a[0][i])
		{
			dp[0][i] = dp[0][i - 1] + 1;
		}
	}
	for (int i = 1; i < 5; i++)
	{
		if (a[i][0])
		{
			dp[i][0] = dp[i - 1][0] + 1;
		}
	}
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if (a[i][j])
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + 1;
			}
		}
	}
	cout << dp[4][4];
	return 0;
}