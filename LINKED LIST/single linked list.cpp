#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node* next;

};
void insert(node** head, int d)
{
	node* n = new node();
	n->data = d;
	n->next = *head;
	*head = n;
}
void print(node* head)
{
	node *ptr = head;
	while (ptr)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}
void reverse(node** head)
{
	node *curr = *head;
	node *prev = NULL, *nxt = NULL;
	while (curr != NULL)
	{
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}
	*head = prev;
}
void rec_rev(node * curr, node * prev, node** head)
{
	if (!curr->next)
	{
		*head = curr;
		curr->next = prev;
		return;
	}
	node* newt = curr->next;
	curr->next = prev;
	rec_rev(newt, curr, head);
}

int main(void)
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	node *head = NULL;
	insert(&head, 10);
	insert(&head, 20);
	insert(&head, 30);
	print(head);
	reverse(&head);
	rec_rev(head, NULL, &head);
	cout << endl;
	print(head);
}