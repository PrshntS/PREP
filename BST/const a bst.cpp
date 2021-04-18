#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class bst
{
public:
	int key;
	bst* left;
	bst* right;
	bst(int n)
	{
		key = n;
		left = NULL;
		right = NULL;
	}

};
bst* newn(int key)
{
	bst* a = new bst(key);
	return a;
}
bst* insert(bst* node, int x)
{
	if (!node)
	{
		return new bst(x);
	}
	if (node->key > x)
	{
		node->left = insert(node->left, x);
	}
	else if (node->key < x)
	{
		node->right = insert(node->right, x);
	}
	return node;
}
bst* create(vector<int> in, vector<int> pre, int l, int h, unordered_map<int, int> m)
{
	static int curr = 0;
	if (l > h)
	{
		return NULL;
	}
	int key = pre[curr++];
	bst *root = newn(key);
	if (l == h)
	{
		return root;
	}
	int inidx = m[key];
	root->left = create(in, pre, l, inidx - 1, m);
	root->right = create(in, pre, inidx + 1, h, m);

	return root;
}
void inorder(bst* root)
{
	if (!root)
	{
		return;
	}
	inorder(root->left);
	cout << root->key << " ";
	inorder(root->right);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> pre{10, 5, 1, 7, 40, 50};
	vector<int> in = pre;
	sort(in.begin(), in.end());
	unordered_map<int, int> m;
	for (int i = 0; i < pre.size(); i++)
	{
		m[in[i]] = i;
	}
	bst *root = create(in, pre, 0, pre.size() - 1, m);
	inorder(root);

	return 0;
}