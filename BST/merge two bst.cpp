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
	node(int a)
	{
		x = a;
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
void merged(vector<int> a, vector<int> b, int n1, int n2, vector<int>& c)
{
	int i = 0, j = 0, k = 0;
	while (i < n1 && j < n2)
	{
		if (a[i] < b[j])
		{
			c.push_back(a[i++]);
		}
		else
		{
			c.push_back(b[j++]);
		}
	}
	while (i < n1)
	{
		c.push_back(a[i++]);
	}
	while (j < n2)
	{
		c.push_back(b[j++]);

	}
}
node* arraytobst(vector<int> c, int l, int h)
{
	if (l > h)
	{
		return NULL;
	}
	int mid = l + (h - l) / 2;
	node* root = newn(c[mid]);
	root->left = arraytobst(c, l, mid - 1);
	root->right = arraytobst(c, mid + 1, h);
	return root;
}
node* merger(node* one, node* two, int n1, int n2)
{
	vector<int> a, b, c;
	inorder(a, one);
	inorder(b, two);
	merged(a, b, n1, n2, c);
	int n = c.size();
	return arraytobst(c, 0, n - 1);
}
void pinorder(node* root)
{
	if (!root)
	{
		return;
	}
	pinorder(root->left);
	cout << root->x << " ";
	pinorder(root->right);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	node* one = newn(100);
	one->left = newn(50);
	one->right = newn(300);
	one->left->left = newn(20);
	one->left->right = newn(70);

	node* two = newn(80);
	two->left = newn(40);
	two->right = newn(120);

	node* un = merger(one, two, 5, 3);
	pinorder(un);


	return 0;
}