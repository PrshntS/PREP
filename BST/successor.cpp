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
	int data;
	bst* left;
	bst* right;
	bst(int n)
	{
		data = n;
		left = NULL;
		right = NULL;
	}

};
bst* insert(bst* root, int key)
{
	if (!root)
	{
		return new bst(key);
	}
	if (key < root->data)
	{
		root->left = insert(root->left, key);
	}
	else
	{
		root->right = insert(root->right, key);

	}
	return root;
}
bst* min_val(bst* root)
{
	bst *curr = root;
	while (curr->left)
	{
		curr = curr->left;
	}

	return curr;
}
bst* succ(bst* root, bst* temp)
{
	if (temp->right)
	{
		return min_val(temp->right);
	}
	else
	{
		bst* tmp = NULL;
		while (root)
		{
			if (temp->data < root->data)
			{
				tmp = root;
				root = root->left;
			}
			else if (temp->data > root->data)
			{
				root = root->right;
			}
			else
			{
				break;
			}
		}
		return tmp;
	}
}
void inorder(bst* root)
{
	if (!root)
	{
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
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
	bst *temp = root->left->right;
	cout << temp->data << endl;
	bst *ans = succ(root, temp);
	cout << ans->data;
	cout << endl;
	inorder(root);



	return 0;
}