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
	vector<int> v{7, 10, 4, 3, 20, 15};
	int k = 3;
	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 0; i < v.size(); i++)
	{
		q.push(v[i]);
	}
	int ans = 0;
	for (int i = 0; i < k; i++)
	{
		ans = q.top();
		q.pop();
	}
	cout << ans;
	//cout << q.top();

	return 0;
}