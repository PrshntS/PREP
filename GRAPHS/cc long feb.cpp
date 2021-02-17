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
	int64_t t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		ll mox = INT_MIN;
		ll mon = INT_MAX;
		for (ll i = 0; i < n; i++)
		{
			ll x; cin >> x;
			mox = max(mox, x);
			mon = min(mon, x);

		}
		cout << 2 * (mox - mon) << endl;
	}


	return 0;
}