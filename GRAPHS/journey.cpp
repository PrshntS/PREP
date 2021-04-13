#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
class graph
{
public:
	int V;
	list<int> *adj;
	graph(int n)
	{
		V = n;
		adj = new list<int>[V];
	}
	void add(int u, int v)
	{
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	void dfs( vector<bool>& vis, vector<int>& temp, int src)
	{
		vis[src] = true;
		temp.push_back(src);
		for (int i : adj[src])
		{
			if (!vis[i])
			{
				dfs( vis, temp, i);
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
	int n;
	cin >> n;
	graph g(n);
	ll p;
	cin >> p;
	for (int i = 0; i < p; i++)
	{
		int x, y;
		cin >> x >> y;
		g.add(x, y);
	}
	vector<bool> v(n, false);
	vector<int> ans;
	for (int i = 0; i < n; i++)
	{
		if (!v[i])
		{
			vector<int> temp;
			g.dfs( v, temp, i) ;
			ans.push_back(temp.size());

		}


	}
	int sum = 0;
	int result = 0;
	for (int size : ans)
	{
		result += sum * size;
		sum += size;
	}
	cout << result;





	return 0;
}