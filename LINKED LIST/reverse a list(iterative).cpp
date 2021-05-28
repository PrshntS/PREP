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
	node* next;
	node(int n)
	{
		this->data = data;
		next = NULL;

	}

};
class lil
{
public:
	node* head;
	lil()
	{
		head = NULL;

	}
	void push(int x)
	{
		node* n = new node(x);
		n->next = head;
		head = n;
		cout << "PUSH CALLED" << endl;
	}
	void reverse()
	{
		node* curr = head;
		node *prev = NULL;
		node *next = NULL;
		while (curr)
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head = prev;
		cout << "REVERSE CALLED" << endl;
	}
	void print()
	{
		node* ptr = head;
		while (ptr)
		{
			cout << ptr->data << " ";
			ptr = ptr->next;

		} cout << "PRINT CALLED" << endl;
	}
};
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lil l;

	l.push(10);

	l.push(20);

	l.push(30);
	l.print();

	cout << endl;
	l.reverse();
	l.print();


	return 0;
}