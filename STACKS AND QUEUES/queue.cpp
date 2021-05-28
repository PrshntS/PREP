#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class Queue
{
public:
	int front, rear, size;
	unsigned capacity;
	int *a;
};
Queue* create(unsigned capacity)
{
	Queue* q = new Queue();
	q->capacity = capacity;
	q->front = q->size = 0;
	q->rear = capacity - 1;
	q->a = new int[q->capacity];
	return q;
}
bool isFull(Queue* q)
{
	return (q->size == q->capacity);

}
bool isEmpty(Queue* q)
{
	return (q->size == 0);

}
void enqueue(Queue* q, int x)
{
	if (isFull(q))
	{
		return;
	}
	q->rear = (q->rear + 1) % q->capacity;
	q->a[q->rear] = x;
	q->size++;
}
int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		return mn;
	}
	int x = q->a[q->front];
	q->front == (q->front + 1) % q->capacity;
	q->size--;
	return x;
}
int front(Queue* q)
{
	if (isEmpty(q))
	{
		return mn;
	}
	return q->a[q->front];

}
int rear(Queue* q)
{
	if (isEmpty(q))
	{
		return mn;
	}
	return q->a[q->rear];
}




int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Queue* q = create(1000);
	enqueue(q, 10);
	enqueue(q, 20);
	enqueue(q, 5);
	cout << dequeue(q);
	cout << front(q);
	return 0;
}