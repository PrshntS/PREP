#include<bits/stdc++.h>
#include<sstream>
using namespace std;
#define ll long long
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ostringstream a, b, c;
	ll x, y, z; cin >> x >> y >> z;
	a << x;
	b << y;
	c << z;
	string p, q, r;
	p = a.str();
	q = b.str();
	r = c.str();
	cout << p.size();

	string ans = "";
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] > q[i] && p[i] > r[i])
		{
			ans += p[i];
		}
		else if (q[i] > r[i])
		{
			ans += q[i];
		}
		else
		{
			ans += r[i];
		}
	}
	cout << stoi(ans);


	return 0;
}