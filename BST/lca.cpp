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
	if (node->x > key)
	{
		node->left = insert(node->left, key);
	}
	else if (node->x < key)
	{
		node->right = insert(node->right, key);
	}
	return node;
}
bst* lca(bst* node, int n1, int n2)
{
	if (!node)
	{
		return node;
	}
	if (node->x > n1 && node->x > n2)
	{
		lca(node->left, n1, n2);
	}
	if (node->x < n1 && node->x < n2)
	{
		lca(node->right, n1, n2);
	}
	return node;
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
	bst *ans = lca(root, 20, 30);
	cout << ans->x;


	return 0;
}