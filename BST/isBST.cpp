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
	int x;
	bst* left;
	bst* right;
	bst(int n)
	{
		x = n;
		left = NULL;
		right = NULL;
	}
};
bst* insert(bst* node, int key)
{
	if (!node)
	{
		return new bst(key);
	}
	if (key < node->x)
	{
		node->left = insert(node->left, key);

	}
	else if (key > node->x)
	{
		node->right = insert(node->right, key);
	}
	return node;
}
bool isBSTUtil(bst* root, int max, int min)
{
	if (!root)
	{
		return 1;
	}
	if (root->x < min || root->x > max)
	{
		return 0;

	}
	return isBSTUtil(root->left, root->x - 1, min) && isBSTUtil(root->right, max, root->x + 1);
}
bool isBST(bst* root)
{
	return isBSTUtil(root, mx, mn);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	bst *root = insert(NULL, 50);
	root = insert(root, 30);
	root = insert(root, 20);
	root = insert(root, 40);
	root = insert(root, 70);
	root = insert(root, 60);
	root = insert(root, 80);
	if (isBST(root))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}