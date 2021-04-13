#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class graph
{
public:
	int V;
	list<int> *adj;
	graph(int n)
	{
		V = n;
		adj = new list<int>[V];
	}
	void add(int u, int v)
	{
		adj[u].pb(v);
		adj[v].pb(u);
	}
	void dfs(int u, vector<bool>& vis, vector<int>& temp)
	{
		vis[u] = true;
		temp.push_back(u);
		for (int i : adj[u])
		{
			if (!vis[i])
			{
				dfs(i, vis, temp);
			}

		}
	}
};

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

		ll n, m, clib, croad;
		cin >> n >> m >> clib >> croad;
		graph g(n + 1);
		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			g.add(x, y);

		}
		vector<bool> vis(n + 1, false);
		vector<int> roads;
		int count = 0;
		ll sum = 0;
		for (int i = 1; i <= n; i++)
		{
			if (!vis[i])
			{
				vector<int> temp;
				g.dfs(i, vis, temp);
				sum += (temp.size() - 1);
				count++;

			}

		}
		ll case1 = n * clib;
		ll case2 = sum * croad + count * clib;
		cout << min(case1, case2) << endl;



	}


	return 0;
}