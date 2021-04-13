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
	int d;
	node* left;
	node* right;
	node(int x)
	{
		d = x;
		left = NULL;
		right = NULL;
	}

};
node* newn(int n)
{
	node* r = new node(n);
	return r;
}
void invert(node* root)
{
	if (!root)
	{
		return ;
	}
	invert(root->left);
	invert(root->right);
	node* temp = root->left;
	root->left = root->right;
	root->right = temp;
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
		cout << root->d << " ";
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
	node* root = newn(1);
	root->left = newn(2);
	root->right = newn(3);
	root->left->left = newn(4);
	root->left->right = newn(5);
	root->right->left = newn(6);
	root->right->right = newn(7);
	inorder(root);
	cout << endl;
	invert(root);
	cout << endl;
	inorder(root);


	return 0;
}