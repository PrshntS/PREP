#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define max INT_MAX
#define min INT_MIN
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t; cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;

		if ((n / 2020) >= (n % 2020))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

	}


	return 0;
}