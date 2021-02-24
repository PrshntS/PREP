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
		int lh = 1 + height(root->left);
		int rh = 1 + height(root->right);
		return max(lh, rh);
	}
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
	cout << height(root);


	return 0;
}