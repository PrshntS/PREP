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
	ll n; cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	int sum1 = 0, sum2 = 0;
	int ans;
	map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		sum1 += a[i];
		sum2 += b[i];
		int sum = sum1 - sum2;
		if (!sum)
		{
			ans = i + 1;
		}
		if (m.find(sum) != m.end())
		{
			ans = max(ans, i - m[sum]);
		}
		else
		{
			m[sum] = i;
		}

	}
	cout << ans;


	return 0;
}