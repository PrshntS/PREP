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
		double n; cin >> n;
		if ((int)log2(n) == log2(n))
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}

	}


	return 0;
}