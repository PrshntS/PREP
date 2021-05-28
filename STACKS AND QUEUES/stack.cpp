#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class Stack
{
	int top;
	int *a;
public:
	Stack(int x)
	{
		a = new int[x];
		top = -1;
	}

	void push(int x)
	{
		a[++top] = x;
	}
	void pop()
	{
		//cout << a[top] << endl;
		top--;
	}
	void peek()
	{	cout << a[top] << endl;
	}
	bool isEmpty()
	{
		return (top == -1);

	}
};
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	class Stack s(20);
	s.push(10);
	s.peek();
	s.push(20);
	s.peek();
	s.push(30);
	s.peek();
	s.pop();
	s.peek();
	cout << s.isEmpty() << endl;

	return 0;
}