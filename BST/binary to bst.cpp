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
	node(int x)
	{
		this->x = x;
		left = NULL;
		right = NULL;
	}
};
node* newn(int x)
{
	node* a = new node(x);
	return a;
}
void inorder(vector<int>& in, node* root)
{
	if (!root)
	{
		return;
	}
	inorder(in, root->left);
	in.push_back(root->x);
	inorder(in, root->right);
}
void reverse(vector<int>& in, node* root, int& i)
{
	if (!root)
	{
		return;
	}
	reverse(in, root->left, i);
	root->x = in[i++];
	reverse(in, root->right, i);
}
void  binary_to_bst(node* root)
{
	if (!root)
	{
		return;
	}
	vector<int> in;
	inorder(in, root);
	sort(in.begin(), in.end());
	int i = 0;
	reverse(in, root, i);

}
void print(node* root)
{
	if (!root)
	{
		return;
	}
	print(root->left);
	cout << root->x << " ";
	print(root->right);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	node *root = newn(10);
	root->left = newn(30);
	root->right = newn(15);
	root->left->left = newn(20);
	root->right->right = newn(5);
	print(root);
	cout << endl;
	binary_to_bst(root);
	print(root);

	return 0;
}