#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
#define M 8
#define N 8
bool valid(int x, int y)
{
	if (x < 0 || y < 0)
	{
		return false;
	}
	if (x >= N || y >= M)
	{
		return false;
	}
	return true;
}
void floodfill(int screen[][8], int r, int c, int newc)
{
	bool vis[M][N];
	memset(vis, 0, sizeof(vis));
	queue<pair<int, int>> q;
	q.push({r, c});
	while (!q.empty())
	{
		pair<int, int> p = q.front();
		int x = p.first;
		int y = p.second;
		int precolor = screen[x][y];

		screen[x][y] = newc;
		q.pop();

		if (valid(x - 1, y) && (vis[x - 1][y] == 0) && screen[x - 1][y] == precolor)
		{
			q.push({x - 1, y});
			vis[x - 1][y] = true;

		}
		if (valid(x + 1, y) && (vis[x + 1][y] == 0) && screen[x + 1][y] == precolor)
		{
			q.push({x + 1, y});
			vis[x + 1][y] = true;

		}
		if (valid(x, y + 1) && (vis[x][y + 1] == 0) && screen[x][y + 1] == precolor)
		{
			q.push({x, y + 1});
			vis[x][y + 1] = true;

		}
		if (valid(x, y - 1) && (vis[x][y - 1] == 0) && screen[x][y - 1] == precolor)
		{
			q.push({x, y - 1});
			vis[x][y - 1] = true;
		}
	}
	for (ll i = 0; i < M; i++)
	{
		for (ll j = 0; j < N; j++)
		{
			cout << screen[i][j] << " ";
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
	int screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 0, 0},
		{1, 0, 0, 1, 1, 0, 1, 1},
		{1, 2, 2, 2, 2, 0, 1, 0},
		{1, 1, 1, 2, 2, 0, 1, 0},
		{1, 1, 1, 2, 2, 2, 2, 0},
		{1, 1, 1, 1, 1, 2, 1, 1},
		{1, 1, 1, 1, 1, 2, 2, 1},
	};
	int x = 4, y = 4, newc = 3;
	floodfill(screen, x, y, newc);



	return 0;
}