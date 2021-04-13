#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
#define MOD 1e9+7
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector<ll> v(n + 2);
	for (int i = 1; i <= n; i++);
	{
		int x; cin >> x;
		v.push_back(x);
	}
	ll q; cin >> q;
	for (int i = 0; i < q; i++)
	{	ll first = 10, result = 1;
		ll t, l, r;
		cin >> t >> l >> r;
		if (t == 1)
		{
			v[l] = r;
		}
		if (t == 2)
		{
			for (int i = 1; i <= n; i++)
			{
				result = (result * v[i])
			}
		}
	}


	return 0;
}