#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
#define V 9
int mindist(vector<bool> vis, vector<int> dist)
{
	int mindi = mx;
	int idx = 0;
	for (int i = 0; i < V ; i++)
	{
		if (!vis[i] && dist[i] < mindi)
		{
			mindi = dist[i];
			idx = i;
		}
	}
	return idx;
}
void print(vector<int> dist)
{
	cout << "vertex" << " " << "distance" << endl;
	for (int i = 0; i < V; i++)
	{
		cout << i << "  " << dist[i] << endl;
	}
}
void djikstra(int graph[][V], int src)
{
	vector<bool> vis(V, false);
	vector<int> dist(V, mx);

	dist[src] = 0;
	for (int i = 0; i < V - 1; i++)
	{
		int u = mindist(vis, dist);
		vis[u] = true;
		for (int v = 0; v < V; v++)
		{
			if (graph[u][v] && !vis[v] && (dist[u] + graph[u][v] < dist[v]))
			{
				dist[v] = dist[u] + graph[u][v];
			}
		}
	}
	print(dist);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
		{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
		{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
		{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
		{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
		{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
		{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
		{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
		{ 0, 0, 2, 0, 0, 0, 6, 7, 0 }
	};

	djikstra(graph, 0);



	return 0;
}