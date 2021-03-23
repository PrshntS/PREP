#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class tree
{
public:
	int val;
	tree* left;
	tree* right;

	tree(int x)
	{
		val = x;
		left = NULL;
		right = NULL;
	}

};
tree* newn(int x)
{
	tree* root = new tree(x);
	return root;
}
void inorder(vector<int> tree, vector<int>& in, int index, int n)
{
	if (index >= n)
	{
		return;
	}
	inorder(tree, in, 2 * index + 1, n);
	in.push_back(tree[index]);
	inorder(tree, in, 2 * index + 2, n);

}
void swap(vector<int>& in, int u, int v)
{
	int temp = in[u];
	in[u] = in[v];
	in[v] = temp;


}
int solve(vector<int> in)
{
	map<int, int> m;
	for (int i = 0; i < in.size(); i++)
	{
		m[in[i]] = i;
	}
	vector<int> aux = in;
	int ans = 0;
	sort(aux.begin(), aux.end());
	for (int i = 0; i < in.size(); i++)
	{
		if (in[i] != aux[i])
		{
			ans++;
			int temp = in[i];
			swap(in, i, m[aux[i]]);
			m[temp] = m[aux[i]];
			m[aux[i]] = i;
		}
	}
	return ans;

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> tree{ 5, 6, 7, 8, 9, 10, 11 };
	vector<int> in;
	inorder(tree, in, 0, tree.size());

	cout << solve(in);


	return 0;
}