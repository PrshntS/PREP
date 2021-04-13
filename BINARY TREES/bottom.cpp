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
	int hd ;
	node(int x)
	{
		d = x;
		left = right = NULL;
		hd = mx;

	}

};
node* newn(int d)
{
	node* r = new node(d);
	return r;
}
void bottom(node* root)
{
	if (!root)
	{
		return;
	}
	int hd = 0;
	map<int, int> m;
	root->hd = hd;

	queue<node*> q;
	q.push(root);
	while (!q.empty())
	{
		node* temp = q.front();
		q.pop();
		hd = temp->hd;
		m[hd] = temp->d;
		if (temp->left)
		{
			temp->left->hd = hd - 1;
			q.push(temp->left);
		}
		if (temp->right)
		{
			temp->right->hd = hd + 1;
			q.push(temp->right);

		}
	}
	for (auto i : m)
	{
		cout << i.second << " ";
	}


}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	node *root = new node(20);
	root->left = new node(8);
	root->right = new node(22);
	root->left->left = new node(5);
	root->left->right = new node(3);
	root->right->left = new node(4);
	root->right->right = new node(25);
	root->left->right->left = new node(10);
	root->left->right->right = new node(14);
	bottom(root);

	return 0;
}