#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
void heapify(vector<int>& v, int n, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && v[left] > v[largest])
	{
		largest = left;
	}
	if (right < n && v[right] > v[largest])
	{
		largest = right;
	}
	if (largest != i)
	{
		swap(v[i], v[largest]);
		heapify(v, n, largest);
	}
}
void build_heap(vector<int>& v, int n)
{
	int idx = n / 2 - 1;
	for (int i = idx; i >= 0; i--)
	{
		heapify(v, n, i);
	}
}
void print(vector<int> v)
{
	for (int i : v)
	{
		cout << i << " ";
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> v{ 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };
	int n = v.size();
	build_heap(v, n);
	print(v);
	return 0;
}