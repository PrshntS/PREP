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
void preorder(node* root)
{
	if (!root)
	{
		return ;
	}
	else
	{

		cout << root->val << " ";
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node* root)
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
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);





	return 0;
}