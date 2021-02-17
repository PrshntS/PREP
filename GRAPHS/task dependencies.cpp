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
	vector<int> ans;

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
	void topoutil(int i, vector<bool>& vis)
	{
		vis[i] = true;
		for (auto u : adj[i])
		{
			if (!vis[u])
			{
				topoutil(u, vis);
			}
		}
		ans.push_back(i);
	}
	void top()
	{
		vector<bool> vis(V, false);
		for (int i = 0; i < V; i++)
		{
			if (!vis[i])
			{
				topoutil(i, vis);
			}
		}
		if (ans.size() != V)
		{
			cout << "Impossible";
		}
		else
		{
			cout << "Possible";
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
	g.add(1, 0);
	g.add(2, 1);
	g.add(3, 2);
	g.top();


	return 0;
}