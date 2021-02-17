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
public:
	graph(int V)
	{
		this->V = V;
		adj = new list<int>[V];
	}
	void add(int u, int v)
	{
		adj[u].pb(v);
		adj[v].pb(u);
	}
	bool iscyclicutil(int u, bool visited[])
	{
		vector<int> parent(V, -1);
		queue<int> q;
		visited[u] = true;
		q.push(u);
		while (!q.empty())
		{
			int x = q.front();
			q.pop();
			for (auto i : adj[x])
			{
				if (!visited[i])
				{
					visited[i] = true;
					q.push(i);
					parent[i] = x;
				}
				else if (parent[x] != i)
				{
					return true;
				}

			}


		}
		return false;

	}
	bool iscycle()
	{
		bool *visited = new bool[V];
		memset(visited, 0, V);
		for (int i = 0; i < V; i++)
		{
			if (!visited[i] && iscyclicutil(i, visited))
			{
				return true;
			}

		}
		return false;
	}
};
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	graph g1(5);
	g1.add
	(1, 0);
	g1.add(0, 2);
	g1.add(2, 1);
	g1.add(0, 3);
	g1.add(3, 4);
	g1.iscycle() ?
	cout << "Graph contains cycle\n" :
	     cout << "Graph doesn't contain cycle\n";

	graph g2(3);
	g2.add(0, 1);
	g2.add(1, 2);
	g2.iscycle() ?
	cout << "Graph contains cycle\n" :
	     cout << "Graph doesn't contain cycle\n";

	return 0;
}