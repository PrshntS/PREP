#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
#define V 5
int minkey(vector<bool> vis, vector<int> key)
{
	int idx = 0;
	int minkey = mx;
	for (int i = 0; i < V; i++)
	{
		if (!vis[i] && key[i] < minkey)
		{
			minkey = key[i];
			idx = i;
		}
	}
	return idx;
}
void print(vector<int> parent, int graph[][V])
{
	for (int i = 1; i < V; i++)
	{
		cout << parent[i] << "--" << i << "  " << graph[i][parent[i]] << endl;
	}
}
void prim(int graph[][V])
{
	vector<bool> vis(V, false);
	vector<int> key(V, INT_MAX);
	vector<int> parent(V);

	//include root i.e zeroth vertex;
	key[0] = 0;
	parent[0] = -1;
	for (int i = 0; i < V - 1; i++)
	{
		int u = minkey(vis, key);
		vis[u] = true;
		for (int v = 0; v < V; v++)
		{
			if (graph[u][v] && !vis[v] && graph[u][v] < key[v])
			{
				key[v] = graph[u][v];
				parent[v] = u;
			}
		}
	}
	print(parent, graph);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int graph[V][V] = { { 0, 2, 0, 6, 0 },
		{ 2, 0, 3, 8, 5 },
		{ 0, 3, 0, 0, 7 },
		{ 6, 8, 0, 0, 9 },
		{ 0, 5, 7, 9, 0 }
	};
	prim(graph);


	return 0;
}