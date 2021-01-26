#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define max 1000005
#define min INT_MIN
ll a[max];
bool prime[max];

void sieve()
{
	memset(prime, true, sizeof(prime));

	for (ll p = 2; p * p <= max; p++)
	{

		if (prime[p] == true)
		{
			for (ll i = p * p; i <= max; i += p)
				prime[i] = false;
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	sieve();
	memset(a, 0, sizeof(a));
	for (ll i = 4; i <= max - 3; i++)
	{
		if (prime[i] && prime[i - 2])
			a[i] = a[i - 1] + 1;
		else
			a[i] = a[i - 1];
	}


	ll t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		cout << a[n] << endl;

	}


	return 0;
}