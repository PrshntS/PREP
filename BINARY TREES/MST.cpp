#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int solve(vector<pair<int, int>> aux, int n)
{
	int begin = 0, end = 1;
	int curr = aux[begin].first - aux[begin].second;
	while (begin != end || curr < 0)
	{
		while (curr < 0 && begin != end)
		{
			curr -= aux[begin].first - aux[begin].second;
			begin = (begin + 1) % n;

			if (begin == 0)
				return -1;
		}
		curr += aux[begin].first - aux[begin].second;
		end = (end + 1) % n;
	}
	return begin;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> p(n), d(n);
		for (int i = 0; i < n; i++)
		{
			cin >> p[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> d[i];
		}
		vector<pair<int, int>> aux;
		for (int i = 0; i < n; i++)
		{
			aux.push_back({p[i], d[i]});
		}
		cout << solve(aux, n) << endl;
	}



	return 0;
}