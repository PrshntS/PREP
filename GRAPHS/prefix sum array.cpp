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
	ll n, m;
	cin >> n >> m;
	vector<int> a(n, 0);
	while (m--)
	{
		int x, y, k;
		cin >> x >> y >> k;
		a[x - 1] += k;
		a[y] -= k;
	}
	int maxx = mn;
	for (int i = 1; i < n; i++)
	{
		a[i] += a[i - 1];
		maxx = max(maxx, a[i]);
	}
	cout << maxx;

	return 0;
}
