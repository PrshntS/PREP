#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class Stack
{
	int *arr;
	int size;
	int top1, top2;
public:
	Stack(int n)
	{
		arr = new int[n];
		size = n;
		top1 = -1;
		top2 = size;
	}
	void push1(int x)
	{
		if (top1 < top2 - 1)
		{
			arr[++top1] = x;
		}
		else
		{
			cout << "STACK OVERFLOW" << endl;
			exit(1);
		}
	}
	void push2(int x)
	{
		if (top1 < top2 - 1)
		{
			arr[--top2] = x;
		}
		else
		{
			cout << "STACK OVERFLOW" << endl;
			exit(1);
		}
	}
	int pop1()
	{
		if (top1 < 0)
		{
			cout << "STACK UNDERFLOW" << endl;
			exit(1);
		}
		else
		{
			int x = arr[top1];
			top1--;
			return x;
		}
	}
	int pop2()
	{
		if (top2 >= size )
		{
			cout << "STACK UNDERFLOW" << endl;
			exit(1);
		}
		else
		{
			int x = arr[top2];
			top2++;
			return x;
		}

	}

};
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Stack st(10);
	st.push1(10);
	st.push2(1);
	st.push1(20);
	st.push2(100);
	cout << st.pop2();


	return 0;
}