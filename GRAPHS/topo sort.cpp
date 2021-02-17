#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class graph
{
	int V;
	list<int> *adj;
	vector<int> ans;
public:
	graph(int V)
	{
		this->V = V;
		adj = new list<int>[V];
	}
	void add(int u, int v)
	{
		adj[u].push_back(v);
	}
	void topoutil(int u, vector<bool>& vis)
	{
		vis[u] = true;
		for (auto v : adj[u])
		{
			if (!vis[v])
			{
				topoutil(v, vis);
			}
		}
		ans.push_back(u);

	}
	void topo(int m)
	{
		vector<bool> vis(V, false);
		for (int i = 0; i < V; i++)
		{
			if (!vis[i])
			{
				topoutil(i, vis);
			}
		}
		if (ans.size() != m)
		{
			cout << "Sandro fails";
		}
		else
		{
			reverse(ans.begin(), ans.end());
			print();
		}

	}
	void print()
	{
		for (auto i : ans)
		{
			cout << i << " ";
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
	int n, m;
	cin >> n >> m;
	graph g(n);
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		g.add(u, v);
	}
	g.topo(m);




	return 0;
}