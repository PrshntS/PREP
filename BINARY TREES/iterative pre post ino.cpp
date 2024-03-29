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
void preorder(node* root)
{
	queue<node*> q;
	q.push(root);

	while (!q.empty())
	{
		node* p = q.front();
		cout << p->val << " ";
		q.pop();
		if (p->left) q.push(p->left);
		if (p->right) q.push(p->right);
	}
}
void inorder(node* root)
{
	stack<node*> s;
	node* curr = root;
	while (curr != NULL || (!s.empty()))
	{
		while (curr != NULL)
		{
			s.push(curr);
			curr = curr->left;
		}
		curr = s.top();
		cout << curr->val << " ";
		s.pop();
		//cout << p->val << " ";
		curr = curr->right;

	}
}
void postorder(node* root)
{
	queue<node*> q;
	q.push(root);

	while (!q.empty())
	{
		node* p = q.front();

		q.pop();
		if (p->left) q.push(p->left);
		if (p->right) q.push(p->right);
		cout << p->val << " ";
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