#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int ans(vector<int> v, int k)
{
	int n = v.size();
	vector<int> sum(n + 1);
	sum[0] = 0;
	sum[1] = v[0];
	for (int i = 2; i <= n; i++)
	{
		sum[i] = sum[i - 1] + v[i - 1];
	}

	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			int x = sum[j] - sum[i - 1];
			if (q.size() < k)
			{
				q.push(x);
			}
			else
			{
				if (q.top() < x)
				{
					q.pop();
					q.push(x);
				}
			}
		}
	}
	return q.top();
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> v{10, -10, 20, -40};
	int k = 6;
	cout << ans(v, k);


	return 0;
}