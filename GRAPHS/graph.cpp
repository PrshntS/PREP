#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
void addEdge(vector<ll> adj[], ll u, ll v)
{
	adj[u].pb(v);
	adj[v].pb(u);
}
void print(vector<ll> adj[], ll V)
{
	for (ll i = 0; i < V; i++)
	{
		cout << i << endl;
		for (auto x : adj[i])
		{
			cout << x;
		}
		cout << endl;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll V = 5;
	vector<ll> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	print(adj, V);



	return 0;
}