#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> v{1, 3, 3, 4};
	vector<int> ans;
	stack<int> s;
	unordered_map<int, int> m;
	s.push(v[0]);
	for (int i = 1; i < v.size(); i++)
	{
		if (s.empty())
		{
			s.push(v[i]);
			continue;
		}
		while (!s.empty() && s.top() < v[i])
		{
			m[s.top()] = v[i];
			s.pop();
		}
		s.push(v[i]);
	}
	while (!s.empty())
	{
		m[s.top()] = -1;
		s.pop();
	}
	for (int i : v)
	{
		cout << m[i] << " ";
	}

	return 0;
}