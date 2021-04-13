#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class graph {
public:
	int V;
	list < pair<int, int>>*adj;
	graph(int n)
	{
		V = n;
		adj = new list < pair<int, int>>[V];
	}
	void add(int u, int v, int w)
	{
		adj[u].pb({v, w});
		adj[v].pb({u, w});
	}
};

}
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
		int n;
		cin >> n;
		graph g(n);
		for (int i = 0; i < n - 1; i++)
		{
			int x, y, z;
			cin >> x >> y >> z;
			g.add(x, y, z);
		}
		map<int, pair<int, int>> dir;
		vector<bool> book(n, false);



	}


	return 0;
}