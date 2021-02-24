#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int main() {
	stack<int> Front, Rear;
	int Q;
	cin >> Q;
	while (Q--)
	{
		int type, x;
		cin >> type;
		if (type == 1)
		{
			cin >> x;
			Rear.push(x);
		}
		else
		{
			if (Front.empty())
			{
				while (!Rear.empty())
				{
					Front.push(Rear.top());
					Rear.pop();
				}
			}
			if (!Front.empty())
			{
				if (type == 2) Front.pop();
				if (type == 3) cout << Front.top() << endl;
			}
		}
	}


	return 0;
}