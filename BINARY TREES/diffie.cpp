#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
ll binpow(ll a, ll b, ll m)
{
	a %= m;
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll P, G, a, b, x, y, ka, kb;
	P = 13, G = 6, a = 2, b = 5;
	x = binpow(G, a, P);
	y = binpow(G, b, P);
	ka = binpow(y, a, P);
	kb = binpow(x, b, P);
	cout << "Private key for A is : " << a << "\n";
	cout << "Private key for B is : " << b << "\n";

	cout << "Public key for A is : " << x << "\n";
	cout << "Public key for B is : " << y << "\n";

	cout << "Secret key for A is : " << ka << "\n";
	cout << "Secret key for B is : " << kb << "\n";
	return 0;

}


