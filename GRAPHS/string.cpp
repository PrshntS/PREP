#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;
	cin >> a;
	set<char> s;
	for (int i = 0; i < a.size(); i++)
	{

		if (s.find(a[i]) == s.end())
		{
			cout << a[i];
			s.insert(a[i]);
		}
	}

	return 0;
}