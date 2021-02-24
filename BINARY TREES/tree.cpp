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
	node(int V)
	{
		val = V;
		left = NULL;
		right = NULL;
	}

};
node* newn(int v)
{
	node* n = new node(v);
	return n;
}
void reverse(node* n)
{
	if (!n)
	{
		return;
	}
	else
	{
		if (n->left)
		{
			reverse(n->left);
		}
		if (n->right)
		{
			reverse(n->right);

		}
		cout << n->val;
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
	reverse(root);

	return 0;
}