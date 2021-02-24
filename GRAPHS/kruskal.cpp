#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
#define edge pair<int,int>
class graph
{
	vector<pair<int, edge>> G;
	vector<pair<int, edge>> M;
	int *parent;
	int V;
public:
	graph(int V)
	{
		this->V = V;
		parent = new int[V];
		for (int i = 0; i < V; i++)
		{
			parent[i] = i;
			G.clear();
			M.clear();

		}
	}
	void add(int u, int v, int w)
	{
		G.push_back(make_pair(w, edge(u, v)));
	}
	int find(int i)
	{
		if (i == parent[i])
		{
			return i;
		}
		else {
			return find(parent[i]);
		}
	}
	void unon(int u, int v)
	{
		parent[u] = parent[v];
	}
	void kruskal()
	{
		int i, uRep, vRep;
		sort(G.begin(), G.end());
		for (int i = 0; i < G.size(); i++)
		{
			uRep = find(G[i].second.first);
			vRep = find(G[i].second.second);
			if (uRep != vRep)
			{
				M.push_back(G[i]);
				unon(uRep, vRep);
			}
		}
	}
	void print()
	{
		for (int i = 0; i < M.size(); i++)
		{
			cout << M[i].second.first << "---" << M[i].second.second << " : " << M[i].first;
			cout << endl;
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
	graph g(6);
	g.add(0, 1, 4);
	g.add(0, 2, 4);
	g.add(1, 2, 2);
	g.add(1, 0, 4);
	g.add(2, 0, 4);
	g.add(2, 1, 2);
	g.add(2, 3, 3);
	g.add(2, 5, 2);
	g.add(2, 4, 4);
	g.add(3, 2, 3);
	g.add(3, 4, 3);
	g.add(4, 2, 4);
	g.add(4, 3, 3);
	g.add(5, 2, 2);
	g.add(5, 4, 3);
	g.kruskal();
	g.print();



	return 0;
}