#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
#define R 5
#define C 5
bool is_safe(int mat[][C], int i, int j, vector<vector<bool>>& vis)
{
	if (i >= 0 && i < R && j >= 0 && j < C && !vis[i][j] && mat[i][j])
	{
		return true;
	}
	else
	{
		return false;
	}
}
void dfs(int mat[][C], int i, int j, vector<vector<bool>>& vis)
{
	vis[i][j] = true;
	int mapr[] = { -1, -1, -1, 0, 0, 1, 1, 1};
	int mapc[] = { -1, 0, 1, -1, 1, -1, 0, 1};
	for (int k = 0; k < 8; k++)
	{
		if (is_safe(mat, i + mapr[k], j + mapc[k], vis)) dfs(mat, i + mapr[k], j + mapc[k], vis);
	}
}
int no(int mat[][C])
{
	vector < vector<bool > >vis(R, vector<bool> (C, false));
	int count = 0;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < R; j++)
		{
			if (!vis[i][j] && mat[i][j])
			{
				dfs(mat, i, j, vis);
				count++;
			}
		}
	}
	return count;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int mat[R][C] = {{ 1, 1, 0, 0, 0 },
		{ 0, 1, 0, 0, 1 },
		{ 1, 0, 0, 1, 1 },
		{ 0, 0, 0, 0, 0 },
		{ 1, 0, 1, 0, 1 }
	};
	cout << no(mat);


	return 0;
}