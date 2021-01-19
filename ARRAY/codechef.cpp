#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t; cin >> t;
	while (t--)
	{
		int n, k, x, y;
		cin >> n >> k >> x >> y;

		int total = k % 4;
		if (total == 0)
			total = 4;

		if ( (x == 0 && y == 0) || (x == 0 && y == n) || (x == n && y == 0) || (x == n && y == n) ) {
			cout << x << " " << y << endl;
			continue;
		}

		if (x > y) {

			if (total > 0) {
				y = y + (n - x);
				x = x + (n - x);
				total--;
			}

			if ( (x == 0 && y == 0) || (x == 0 && y == n) || (x == n && y == 0) || (x == n && y == n) ) {
				cout << x << " " << y << endl;
				continue;
			}

			if (total > 0) {
				x = x - (n - y);
				y = y + (n - y);
				total--;
			}

			if ( (x == 0 && y == 0) || (x == 0 && y == n) || (x == n && y == 0) || (x == n && y == n) ) {
				cout << x << " " << y << endl;
				continue;
			}

			if (total > 0) {
				y = y - abs(0 - x);
				x = x - abs(0 - x);
				total--;
			}

			if ( (x == 0 && y == 0) || (x == 0 && y == n) || (x == n && y == 0) || (x == n && y == n) ) {
				cout << x << " " << y << endl;
				continue;
			}

			if (total > 0) {
				x = x + abs(0 - y);
				y = y - abs(0 - y);
				total--;
			}

			cout << x << " " << y << endl;
		}
		else {

			if (total > 0) {
				x = x + (n - y);
				y = y + (n - y);
				total--;
			}

			if ( (x == 0 && y == 0) || (x == 0 && y == n) || (x == n && y == 0) || (x == n && y == n) ) {
				cout << x << " " << y << endl;
				continue;
			}

			if (total > 0) {
				y = y - (n - x);
				x = x + (n - x);
				total--;
			}

			if ( (x == 0 && y == 0) || (x == 0 && y == n) || (x == n && y == 0) || (x == n && y == n) ) {
				cout << x << " " << y << endl;
				continue;
			}

			if (total > 0) {
				x = x - abs(0 - y);
				y = y - abs(0 - y);
				total--;
			}

			if ( (x == 0 && y == 0) || (x == 0 && y == n) || (x == n && y == 0) || (x == n && y == n) ) {
				cout << x << " " << y << endl;
				continue;
			}

			if (total > 0) {
				y = y + abs(0 - x);
				x = x - abs(0 - x);
				total--;
			}

			cout << x << " " << y << endl;
		}

	}
	return 0;
}