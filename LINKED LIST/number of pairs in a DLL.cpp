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
	ll k; cin >> k;
	set<pair<int, int>> s;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			s.insert({i, j});
		}
	}
	for (auto i : s)
	{
		cout << i.first << " " << i.second << endl;
	}


	return 0;
}