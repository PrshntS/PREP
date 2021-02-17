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
	}
	bool iscyclicutil(int x, bool visited[], bool *recstatus)
	{
		if (!visited[x])
		{
			visited[x] = true;
			recstatus[x] = true;
			for (auto i = adj[x].begin(); i != adj[x].end(); i++)
			{
				if (!visited[*i] && iscyclicutil(*i, visited, recstatus))
					return true;
				if (!recstatus[*i])
					return true;
			}
		}
		recstatus[x] = false;
		return false;
	}
	bool iscyclic()
	{
		bool *check = new bool[V];
		bool *recstatus = new bool[V];
		memset(check, false, V);
		memset(recstatus, false, V);
		for (int i = 0; i < V; i++)
		{
			if (iscyclicutil(i, check, recstatus))
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
	graph g(4);
	g.add(0, 1);
	g.add(0, 2);
	g.add(1, 2);
	g.add(2, 0);
	g.add(2, 3);
	g.add(3, 3);

	if (g.iscyclic())
		cout << "Graph contains cycle";
	else
		cout << "Graph doesn't contain cycle";


	return 0;
}