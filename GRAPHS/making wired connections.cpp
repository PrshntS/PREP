void dfs(int i, int n, vector<bool> &vis, list<int> adj[n])
{
	vis[i] = true;
	for (auto u : adj[i])
	{
		if (!vis[u])
		{
			dfs(u, n, vis, adj);
		}
	}
}
int makeConnected(int n, vector<vector<int>>& connections) {
	if (connections.size() >= n - 1)
	{
		vector<bool> vis(n, false);
		list<int> adj[n];
		for (int i = 0; i < connections.size(); i++)
		{
			adj[connections[i][0]].push_back(connections[i][1]);
			adj[connections[i][1]].push_back(connections[i][0]);
		}
		// counting the number of disconnected components.
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (!vis[i])
			{
				dfs(i, n, vis, adj);
				count++;
			}

		}
		return count - 1;
	}
	else
	{
		return -1;
	}


}