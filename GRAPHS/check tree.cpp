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
	graph(int v)
	{
		this->V = V;
		adj = new<int>[V];
	}
	void add(int u, int v)
	{
		adj[u].pb(v);
		adj[v].pb(u);
	}
	bool iscyclic(int u, vector<bool>& visited, int parent)
	{
		visited[u] = true;
		for (auto i : adj[u])
		{
			if (!visited[i])
			{
				if (iscyclic(i, visited, u))
				{
					return true;
				}
			}
			else if (i != parent)
			{
				return true;
			}

		}
		return false;
	}
	bool istree()
	{
		vector<bool> v(V, false);
		if (iscyclic(0, visited, -1))
		{
			return false;
		}
		for (int i = 0; i < V; i++)
		{
			if (!visited[i])
			{
				return false;
			}
		}
		return true;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t; cin >> t;



	return 0;
}