#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class graph
{
	ll V;
	list<ll> *adj;
public:
	graph(ll V)
	{
		this->V = V;
		adj = new list<ll>[V];
	}
	void add(ll u, ll v)
	{
		adj[u].pb(v);
	}
	void bfs(ll s)
	{
		bool *check = new bool[V];
		for (int i = 0; i < V; i++)
		{
			check[i] = false;
		}
		check[s] = true;
		list<ll> q;
		q.pb(s);
		while (!q.empty())
		{
			s = q.front();
			cout << s << endl;
			q.pop_front();
			for (auto i = adj[s].begin(); i != adj[s].end(); i++)
			{
				if (!check[*i] )
				{	check[*i] = true;
					q.pb(*i);
				}
			}
		}
	}
	void dfsutil(int s, bool check[])
	{
		check[s] = true;
		cout << s;
		for (auto i = adj[s].begin(); i != adj[s].end(); i++)
		{
			if (!check[*i])
			{
				check[*i] = true;
				dfsutil(*i, check);
			}
		}
	}
	void dfs(int s)
	{
		bool *check = new bool[V];
		memset(check, false, V);

		dfsutil(s, check);

	}
	void dfsstack(int x)
	{
		vector<bool> check(V, false);
		stack<int> s;
		s.push(x);
		while (!s.empty())
		{
			x = s.top();
			s.pop();
			if (!check[x])
			{
				cout << x << " ";
				check[x] = true;
			}
			for (auto i = adj[x].begin(); i != adj[x].end(); i++)
			{
				if (!check[*i])
				{
					s.push(*i);
				}
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
	graph g(5);
	g.add(1, 0);
	g.add(0, 2);
	g.add(2, 1);
	g.add(0, 3);
	g.add(1, 4);
	//g.dfs(0);
	g.dfsstack(0);


	return 0;
}