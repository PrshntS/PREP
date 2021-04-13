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
	int x;
	node* left;
	node* right;
	node(int d)
	{
		x = d;
		left = NULL;
		right = NULL;
	}

};
node* insert(node* root, int key)
{
	if (!root)
	{
		return new node(key);
	}
	if (key < root->x)
	{
		root->left = insert(root->left, key);
	}
	else
	{
		root->right = insert(root->right, key);
	}
	return root;
}
void inorder(node* root)
{
	if (!root)
	{
		return;
	}
	inorder(root->left);
	cout << root->x << " ";
	inorder(root->right);
}
node* search(node* root, int key)
{
	if (!root || root->x == key)
	{
		return root;
	}
	if (key < root->x)
	{
		return search(root->left, key);
	}
	else
	{
		return search(root->right, key);
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	node *root = insert(NULL, 50);
	root = insert(root, 30);
	root = insert(root, 20);
	root = insert(root, 40);
	root = insert(root, 70);
	root = insert(root, 60);
	root = insert(root, 80);
	inorder(root);
	cout << endl;
	node *b = search(root, 60);
	if (b)
	{
		cout << "KEY FOUND=" << b->x;
	}
	else
	{
		cout << "KEY NOT FOUND";
	}


	return 0;
}