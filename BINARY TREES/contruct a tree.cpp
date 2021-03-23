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

	tree(int n)
	{
		val = n;
		left = NULL;
		right = NULL;
	}


};
tree* newn(int x)
{
	tree* a = new tree(x);
	return a;
}
int search(vector<int> in, int l, int h, int x)
{

	for (int i = l; i <= h; ++i)
	{
		if (in[i] == x)
		{
			return i;
		}
	}
	return -1;

}
void postorder(tree* root)
{
	if (!root)
	{
		return;
	}
	else
	{


		postorder(root->left);
		postorder(root->right);
		cout << root->val << " ";
	}
}
tree* solve(int l, int h, vector<int> in, vector<int> pre)
{

	static int idx = 0;
	if (l > h) return NULL;
	tree* root = newn(pre[idx++]);
	if (l == h) return root;
	int inidx = search(in, l, h, root->val);
	root->left = solve(l, inidx - 1, in, pre);
	root->right = solve(inidx + 1, h, in, pre);
	return root;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> in{3, 1, 4, 0, 5, 2};
	vector<int> pre{0, 1, 3, 4, 2, 5};
	int n = in.size();
	tree* root = solve(0, n - 1, in, pre);
	postorder(root);


	return 0;
}