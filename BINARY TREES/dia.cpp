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
int diameter(node* root, int& height)
{
	int lh = 0, rh = 0;
	int ld = 0, rd = 0;
	if (!root)
	{
		return 0;
	}
	ld = diameter(root->left, height);
	rd = diameter(root->right, height);
	height = max(rh, lh) + 1;
	return max(lh + rh + 1, max(ld, rd));
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
	int h = 0;
	cout << diameter(root, h);


	return 0;
}