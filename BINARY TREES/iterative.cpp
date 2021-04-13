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
	node(int v)
	{
		d = v;
		left = NULL;
		right = NULL;
	}
};
node* newn(int a)
{
	node* x = new node(a);
	return x;
}
void inorder(vector<int>& in, node* root)
{
	stack<node*> s;
	node* curr = root;
	while (!s.empty() || curr != NULL)
	{
		if (curr != NULL)
		{
			s.push(curr);
			curr = curr->left;
		}
		else
		{
			node* u = s.top();
			in.push_back(u->d);
			curr = curr->right;
		}
	}
}
void preorder(vector<int>& pre, node* root)
{
	stack<node*> s;
	s.push(root);
	while (!s.empty())
	{
		node* u = s.top();
		pre.pb(u->d);
		if (u->right)
		{
			s.push(u->right);
		}
		if (u->left)
		{
			s.push(u->left);
		}

	}
}
void postorder(vector<int>& post, node* root)
{
	stack<node*> s;
	s.push(root);
	stack<int> out;
	while (!s.empty())
	{
		node* u = s.top();
		s.pop();
		if (u->left)
		{
			s.push(u->left);
		}
		if (u->right)
		{
			s.push(u->right);
		}
		out.push(u->d);

	}
	while (!out.empty())
	{
		post.push_back(out.top());
		out.pop();
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
	vector<int> pre, in, post;
	preorder(pre, root);
	inorder(in, root);
	postorder(post, root);
	for (int i : pre)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i : in)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i : post)
	{
		cout << i << " ";
	}
	cout << endl;



	return 0;
}