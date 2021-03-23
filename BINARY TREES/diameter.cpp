#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class node
{
public:
	int val;
	node* left;
	node* right;
	node(int v)
	{
		val = v;
		left = NULL;
		right = NULL;
	}
};
node* newn(int v)
{
	node *n = new node(v);
	return n;
}
int height(node* root)
{
	if (!root)
	{
		return 0;
	}
	else
	{
		int lh = height(root->left);
		int rh = height(root->right);
		return 1 + max(lh, rh);
	}
}
int diameter(node* root)
{
	if (!root)
	{
		return 0;
	}
	int lh = height(root->left);
	int rh = height(root->right);

	int ldia = diameter(root->left);
	int rdia = diameter(root->right);

	return max(lh + rh + 1, max(ldia, rdia));
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	node *root = new node(10);
	root->left = newn(20);
	root->right = newn(30);
	root->left->left = newn(40);
	root->left-> right = newn(60);
	cout << diameter(root);


	return 0;
}