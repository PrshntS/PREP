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
	int count = 0;
public:
	graph(int V)
	{
		this->V = V;
		adj = new list<int>[V];
	}
	void add(int u, int v)
	{
		adj[u].push_back(v);
	}
	void dfsutil(int u, vector<bool>& vis)
	{
		vis[u] = true;
		for (auto x : adj[u])
		{
			if (!vis[x])
			{
				count++;
				dfsutil(x, vis);
			}
		}

	}


	vector<int> dfs()
	{
		vector<bool> vis(V, false);
		vector<int> ans;

		for (int i = 0; i < V; i++)
		{

			count = 0;
			if (!vis[i])
			{
				count++;
				dfsutil(i, vis);

			}
			ans.push_back(count);
		}
		return ans;


	}
	vector<int> dfss(int u)
	{
		vector<int> vis(V, false);
		stack<ll> s;
		s.push(s);
		while (!s.empty())
		{
			int x = s.top();
			s.pop();
			for (auto i : adj[x])
			{
				if ()
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
	int x, y;
	cin >> x >> y;
	graph g(x);
	for (int i = 0; i < y; i++)
	{
		int a, b; cin >> a >> b;
		g.add(a, b);
	}
	ll sum = 0;
	vector<int> ans = g.dfs();

	// for (int i = 0; i < ans.size(); i++)
	// {
	// 	for (int j = i + 1; j < ans.size(); i++)
	// 	{
	// 		sum += ans[i] + ans[j];
	// 	}
	// }
	// cout << sum;

	int n = ans.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum += (ans[i] * ans[j]);
		}
	}
	cout << sum;
	return 0;
}