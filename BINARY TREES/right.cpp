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
	node* n = new node(v);
	return n;

}
void leftu(node* root, int level , int& max_level)
{
	if (!root)
	{
		return ;
	}
	if (max_level < level)
	{
		cout << root->val;
		max_level = level;
	}
	leftu(root->right, level + 1, max_level);
	leftu(root->left, level + 1, max_level);

}
void left(node* root)
{
	int max_level = 0;
	leftu(root, 1, max_level);
}

void inorder(node* root)
{
	if (!root)
	{
		return ;
	}
	else
	{
		inorder(root->left);
		cout << root->val << " ";
		inorder(root->right);
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	node* root = new node(1);
	root->left = newn(2);
	root->right = newn(3);
	root->left->left = newn(4);
	root->left->right = newn(5);
	root->left->left->right = newn(8);
	root->right->left = newn(6);
	root->right->right = newn(7);
	vector<int> v;

	left(root);



	return 0;
}