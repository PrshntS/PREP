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
	node* prev;
	int data;
	node* next;
};
class Stack
{
public:
	node* head;
	node* mid;
	int count;

};
Stack* create()
{
	Stack* s = new Stack();
	s->count = 0;
	return s;
}
void push(Stack* s, int x)
{
	node* n = new node();
	n->data = x;
	n->prev = NULL;
	n->next = s->head;
	s->count++;
	if (s->count == 1)
	{
		s->mid = n;
	}
	else
	{
		s->head->prev = n;
		if (!(s->count & 1))
		{
			s->mid = s->mid->prev;
		}
	}
	s->head = n;
}
int pop(Stack* s)
{
	if (s->count == 0)
	{
		cout << "STACK UNDERFLOW" << endl;
		return -1;
	}
	node* n = s->head;
	int x = n->data;
	s->head = n->next;
	s->count--;
	if (s->count & 1)
	{
		s->mid = s->mid->next;
	}
	free(n);
	return x;
}
int findmid(Stack* s)
{
	if (s->count == 0)
	{
		return -1;
	}
	return s->mid->data;
}
int delmid(Stack* s)
{
	int x = s->mid->data;
	s->mid->prev->next = s->mid->next;
	s->mid->next->prev = s->mid->prev;
	delete s->mid;
	return x;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Stack* s = create();
	push(s, 11);
	push(s, 22);
	push(s, 33);
	push(s, 44);
	cout << findmid(s) << endl;
	cout << delmid(s) << endl;
	pop(s);
	cout << findmid(s) << endl;



	return 0;
}