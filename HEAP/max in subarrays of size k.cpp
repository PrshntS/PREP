#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
void heapify(vector<int>& util, int n, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && util[left] > util[largest])
	{
		largest = left;
	}
	if (right < n && util[right] > util[largest])
	{
		largest = right;
	}
	if (i != largest)
	{
		swap(util[largest], util[i]);
		heapify(util, n, largest);
	}
}
int print(vector<int>& util)
{
	int n = util.size();
	int idx = n / 2 - 1;
	for (int i = idx; i >= 0; i--)
	{
		heapify(util, n, i);
	}
	return util[0];
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::vector<int> v{8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
	int n = v.size();
	int k = 4;
	vector<int> ans;
	for (int i = 0; i < n - k + 1; i++)
	{

		vector<int> util(k);
		copy(v.begin() + i , v.end() + i + 4, util.begin());
		cout << print(util) << " ";

	}


	return 0;
}