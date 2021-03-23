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
		ll n; cin >> n;
		ll maxx = mn;
		set<ll> s;
		ll d = ceil(log2(n));
		//cout << d;
		for (ll i = 1; i < pow(2, d); i++)
		{
			if (s.find(n ^ i) != s.end())
			{
				if (maxx < i * (i ^ n))
				{
					maxx = i * (i ^ n);
				}

			}
			s.insert(i);
		}

		cout << maxx << endl;

	}


	return 0;
}