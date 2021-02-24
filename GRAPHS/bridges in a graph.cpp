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
	list<ll> *adj;
public:
	graph(int V)
	{
		this->V = V;
		adj = new list<ll>[V];
	}
	void add(int u, int v)
	{
		adj[u].pb(v);
		adj[v].pb(u);
	}
	void bridgeutil(int u, vector<bool>& vis, vector<int>& parent, vector<int>& dis, vector<int>& low)
	{
		static int time = 0;
		vis[u] = true;
		dis[u] = low[u] = ++time;
		for (auto v : adj[u])
		{
			if (!vis[v])
			{
				parent[v] = u;
				bridgeutil(v, vis, parent, dis, low);

				low[u] = min(low[u], low[v]);
				if (low[v] > dis[u])
				{
					cout << v << "----" << u << endl;
				}
			}
			else
			{
				if (v != parent[u])
				{
					low[u] = min(low[u], dis[v]);
				}
			}

		}
	}
	void bridge()
	{
		vector<bool> vis(V, false);
		vector<int> parent(V, -1);
		vector<int> dis(V);
		vector<int> low(V);

		for (int i = 0; i < V; i++)
		{
			if (!vis[i])
			{
				bridgeutil(i, vis, parent, dis, low);

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
	cout << "Bridges in first graph \n";
	graph g1(5);
	g1.add(1, 0);
	g1.add(0, 2);
	g1.add(2, 1);
	g1.add(0, 3);
	g1.add(3, 4);
	g1.bridge();

	cout << "Bridges in second graph\n";
	graph
	g2(4);
	g2.add(0, 1);
	g2.add(1, 2);
	g2.add(2, 3);
	g2.bridge();

	cout << "Bridges in third graph\n";
	graph
	g3(7);
	g3.add(0, 1);
	g3.add(1, 2);
	g3.add(2, 0);
	g3.add(1, 3);
	g3.add(1, 4);
	g3.add(1, 6);
	g3.add(3, 5);
	g3.add(4, 5);
	g3.bridge();


	return 0;
}