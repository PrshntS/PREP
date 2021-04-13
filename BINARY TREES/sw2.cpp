#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
void dfs(map<string, vector<string>>& m, set<string>& s, string src)
{
	s.insert(src);

	for (auto i : m[src])
	{
		if (s.find(i) == s.end())
		{
			dfs(m, s, i);
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	map<string, vector<string>>map;
	for (int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;
		map[a].push_back(b);

	}
	set<string> s;
	string src; cin >> src;
	dfs(map, s, src);
	for (auto i : s)
	{
		cout << i << " ";
	}

	return 0;
}