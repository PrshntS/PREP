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
	bool iscycle()
	{
		vector<int> in_degree(V, 0);
		for (int i = 0; i < V; i++)
		{
			for (auto x : adj[i])
			{
				in_degree[x]++;
			}
		}
		queue<int> q;
		for (int i = 0; i < V; i++)
		{
			if (in_degree[i] == 0)
			{
				q.push(i);
			}
		}
		int count = 0;
		while (!q.empty())
		{

			int s = q.front();
			q.pop();
			for (auto i = adj[s].begin(); i != adj[s].end(); i++)
			{
				if (--in_degree[*i] == 0)
				{
					q.push(*i);
				}
			}
			count++;
		}
		if (count != V)
		{
			return true;
		}
		else
		{
			return false;
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
	graph g(4);
	g.add(0, 1);
	g.add(0, 2);
	g.add(1, 2);
	g.add(2, 0);
	g.add(2, 3);
	g.add(3, 3);

	if (g.iscycle())
		cout << "Graph contains cycle";
	else
		cout << "Graph doesn't contain cycle";





	return 0;
}