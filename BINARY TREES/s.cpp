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
		ll n;
		cin >> n;
		vector<pair<ll, ll>> p, aux;
		for (int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			p.pb({i + 1, x});
		}
		if (n == 2)
		{
			cout << "1" << endl;
			continue;
		}
		aux.pb(p[0]);
		aux.pb(p[1]);
		ll ans = 1,
		   ll sz = aux.size();
		for (int i = 2; i < n; i++)
		{
			while (aux.size() >= 2)
			{
				double s1 = ((double)aux[sz - 1].second - (double)aux[sz - 2].second) / ((double)aux[sz - 1].first - (double)aux[sz - 2].first);
				double s2 = ((double)p[i].second - (double)aux[sz - 1].second) / ((double)p[i].first - (double)aux[sz - 1].first);
				if (s1 <= s2)
				{
					aux.pop_back();
					sz--;
				}
				else
				{
					break;
				}
			}
			aux.pb(p[i]); sz++;
			ans = max(ans, aux[sz - 1].first - aux[sz - 2].first);
		}
		cout << ans << endl;
	}


	return 0;
}