#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
#define MAX 5
bool is_safe(int row, int col, int m[][MAX], int n, bool vis[][MAX])
{
	if (row == -1 || row == n || col == -1 || col == n || vis[row][col] || m[row][col] == 0)
	{
		return false;
	}
	return true;
}
void printpathutil(int row, int col, int m[][MAX], int n, string& path, vector<string>& ans, bool vis[][MAX])
{
	if (row == -1 || row == n || col == -1 || col == n || vis[row][col] || m[row][col] == 0)
	{
		return;
	}
	if (row == n - 1 && col == n - 1)
	{
		ans.pb(path);
		return;
	}
	vis[row][col] = true;
	if (is_safe(row + 1, col, m, n, vis))
	{
		path.push_back('D');
		printpathutil(row + 1, col, m, n, path, ans, vis);
		path.pop_back();
	}
	if (is_safe(row, col - 1, m, n, vis))
	{
		path.push_back('L');
		printpathutil(row, col - 1, m, n, path, ans, vis);
		path.pop_back();
	}
	if (is_safe(row, col + 1, m, n, vis))
	{
		path.push_back('R');
		printpathutil(row, col + 1, m, n, path, ans, vis);
		path.pop_back();
	}
	if (is_safe(row - 1, col, m, n, vis))
	{
		path.push_back
		('U');
		printpathutil(row - 1, col, m, n, path, ans, vis);
		path.pop_back();
	}

	vis[row][col] = false;

}
void printPath(int m[][MAX], int n)
{
	string path;
	vector<string> ans;
	bool vis[n][MAX];
	memset(vis, false, sizeof(vis));
	printpathutil(0, 0, m, n, path, ans, vis);
	/*for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << endl;
	}*/
	for (auto x : ans)
	{
		cout << x << endl;
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
	int m[MAX][MAX] = {
		{ 1, 0, 0, 0, 0 },
		{ 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 0, 1 },
		{ 0, 0, 0, 0, 1 },
		{ 0, 0, 0, 0, 1 }
	};
	int n = sizeof(m) / sizeof(m[0]);
	printPath(m, n);


	return 0;
}