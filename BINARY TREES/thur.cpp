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
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<pair<int, int>> p;
	for (int i = 0; i < n; i++)
	{
		int det1 = (-a[i] + sqrt(pow(a[i], 2) + 4 * a[i])) / 2;
		int det2 = (-a[i] - sqrt(pow(a[i], 2 ) + 4 * a[i])) / 2;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] == det1 || a[j] == det2)
			{
				p.pb({i, j});
			}
		}

	}
	for (auto x : p)
	{
		cout << x.first << " " << x.second << endl;
	}


	return 0;
}