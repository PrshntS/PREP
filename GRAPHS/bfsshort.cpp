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
	void solve(int s, vector<bool>& vis, vector<int>& dist)
	{
		queue<int> q;
		q.push(s);
		vis[s] = true;
		dist[s] = 0;
		while (!q.empty())
		{
			int u = q.front();
			q.pop();
			for (int i : adj[u])
			{
				if (!vis[i])
				{
					vis[i] = true;
					dist[i] = dist[u] + 1;
					q.push(i);
				}
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
		int n, m;
		cin >> n >> m;
		graph g(n + 1);
		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			g.add(x, y);
		}
		vector<bool> vis(n + 1, false);
		vector<int> dist(n + 1, -1);
		queue<int> q;
		int s;
		cin >> s;
		g.solve(s, vis, dist);
		vector<int> ans;
		for (int i = 1; i <= n; i++)
		{
			if (i == s)
			{
				continue;
			}
			else if (vis[i] == false)
			{
				cout << -1 << " ";
			}
			else
			{
				cout << dist[i] * 6 << " ";
			}
		} cout << endl;
	}

	return 0;
}