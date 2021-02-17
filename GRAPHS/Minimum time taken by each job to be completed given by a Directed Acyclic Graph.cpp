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
	list<int>* adj;

public:
	graph(int v)
	{
		V = v;
		adj = new list<int>[V];
	}
	void add(int u, int v)
	{
		adj[u].push_back(v);

	}
	void top()
	{
		vector<int> in(V, 0);
		for (int i = 0; i < V; i++)
		{
			for (auto u : adj[i])
			{
				in[u]++;
			}
		}
		queue<int> q;
		vector<int> job(V, 0);
		for (int i = 0; i < V; i++)
		{
			if (in[i] == 0)
			{
				q.push(i);
				job[i] = 1;
			}
		}

		while (!q.empty())
		{
			int i = q.front();
			q.pop();
			for (auto u : adj[i])
			{
				in[u]--;
				if (job[u] < 1 + job[i])
				{
					job[u] = max(job[u], 1 + job[i]);
				}
				if (in[u] == 0)
				{
					q.push(u);

				}
			}

		}
		for (int i = 0; i < V; i++)
		{
			cout << job[i] << " ";
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
	graph g(10);
	g.add(0, 2);
	g.add(0, 3);
	g.add(0, 4);
	g.add(1, 2);
	g.add(1, 7);
	g.add(1, 8);
	g.add(2, 5);
	g.add(3, 5);
	g.add(3, 7);
	g.add(4, 7);
	g.add(5, 6);
	g.add(6, 7);
	g.add(7, 9);
	g.top();

	return 0;
}