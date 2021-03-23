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
	int data;
	node* left;
	node* right;
	node(int v)
	{
		data = v;
		left = NULL;
		right = NULL;
	}
};
node* newn(int v)
{
	node* n = new node(v);
	return n;
}
int find(string s, int l, int h)
{
	if (l > h)
	{
		return -1;
	}
	stack<char> st;
	for (int i = l; i <= h; i++)
	{
		if (s[i] == '(')
		{
			st.push(s[i]);
		}
		else if (s[i] == ')')
		{
			if (st.top() == '(')
			{
				st.pop();
			}
			if (st.empty())
			{
				return i;
			}
		}
	}
	return -1;
}
node* cstr(string s, int l, int h)
{
	if (l > h)
	{
		return NULL;
	}
	node* root = newn(s[l] - '0');
	int idx = -1;
	if (l + 1 <= h && s[l + 1] == '(')
	{
		idx = find(s, l + 1, h);
	}
	if (idx != -1)
	{
		root->left = cstr(s, l + 2, idx - 1);
		root->right = cstr(s, idx + 2, h - 1);
	}
	return root;

}
void preorder(node* root)
{
	if (!root)
	{
		return ;
	}
	else
	{

		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str = "4(2(3)(1))(6(5))";
	node* root = cstr(str, 0, str.length() - 1);
	preorder(root);
	cout << 1;


	return 0;
}