#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class graph {
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
	void topo(int i, vector<int>& vis, vector<int>& ans)
	{
		vis[i] = true;
		for (auto u : adj[i])
		{
			if (!vis[u])
			{
				topo(u, vis, ans);
			}
			ans.push_back(u);
		}
	}
	void top()
	{
		vector<int> ans;
		vector<bool> vis(V, false);
		for (int i = 0; i < V; i++)
		{
			if (!vis[i])
			{
				topo(i, vis, ans);
			}
		}
		string str = "";
		reverse(ans.begin(), ans.end());
		for (int i = 0; i)

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
	while (t--)
	{

	}


	return 0;
}