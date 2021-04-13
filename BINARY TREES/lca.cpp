#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class Node
{
public:
	int data;
	Node* left;
	Node* right;
	Node(int n)
	{
		data = n;
		Node* left = NULL;
		Node* right = NULL;
	}

};
Node* newn(int n)
{
	Node* a = new Node(n);
	return a;
}
bool lcau(Node* root, vector<int>& path, int k)
{
	if (!root)
	{
		return false;
	}
	path.pb(root->data);
	if (root->data == k)
	{
		return true;
	}
	if (((root->left) && lcau(root->left, path, k)) || ((root->right) && lcau(root->right, path, k)))
	{
		return true;
	}
	path.pop_back();
	return false;
}
int lca(Node* root, int n1, int n2)
{
	vector<int> path1, path2;
	if (!lcau(root, path1, n1) || !lcau(root, path2, n2))
	{
		return -1;
	}
	int i = 0;
	for (i = 0; i < path1.size() && i < path2.size(); i++)
	{
		if (path1[i] != path2[i])
		{
			break;
		}
	}
	return path1[i - 1];

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Node* root = newn(1);
	root->left = newn(2);
	root->right = newn(3);
	root->left->left = newn(4);
	root->left->right = newn(5);
	root->right->left = newn(6);
	root->right->right = newn(7);
	cout << lca(root, 2, 3);


	return 0;
}