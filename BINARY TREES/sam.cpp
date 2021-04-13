#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
#define N 500004
bool bfs(vector<vector<int>> m, int x, int y)
{
	if (x == y)
	{
		return true;
	}
	vector<bool> vis(N + 1, false);
	queue<int> q;
	q.push(x);
	vis[x] = true;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int i : m[u])
		{
			if (i == y)
			{
				return true;
			}
			if (!vis[i])
			{
				vis[i] = true;
				q.push(i);
			}
		}
	}
	return false;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<vector<int>> v(N + 1);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
	}
	int q;
	cin >> q;
	while (q--)
	{
		int t, x, y;
		cin >> t >> x >> y;
		if (t == 1)
		{
			if (y == 0)
			{
				v[x].push_back(++n);
			}
			else
			{
				v[++n].push_back(x);
			}
		}
		else
		{

			if (bfs(v, x, y))
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}

		}
	}



	return 0;
}