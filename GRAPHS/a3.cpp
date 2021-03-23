#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int bsearch(vector<int> x, int k, int l, int h)
{

	if (l <= h)
	{
		int mid = l + (h - l) / 2;
		if (x[mid] == k)
		{
			return mid;
		}
		else if (x[mid] > k)
		{
			return bsearch(x, k, l, mid - 1);
		}
		else
		{
			return bsearch(x, k, mid + 1, h);
		}
	}
	return -1;

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> a { 7, 1, 5, 2, 3, 6 }, b{ 3, 8, 6, 20, 7 };
	int m = a.size();
	int n = b.size();
	vector<int> ans;
	if (m  n)
	{
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++)
		{
			if ((bsearch(a, b[i], 0, a.size() - 1)) != -1)
			{
				ans.pb(b[i]);
			}
		}
	}
	else
	{
		sort(b.begin(), b.end());
		for (int i = 0; i < m; i++)
		{
			if (bsearch(b, a[i], 0, b.size() - 1) != -1)
			{
				ans.pb(a[i]);
			}
		}
	}
	for (auto i : ans)
	{
		cout << i << " ";
	}




	return 0;
}