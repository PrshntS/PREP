#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int gcd(int a, int b) {
	int t;
	while (1) {
		t = a % b;
		if (t == 0)
			return b;
		a = b;
		b = t;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double p = 23;
	double q = 31;
	double n = p * q;
	double track;
	double phi = (p - 1) * (q - 1);

	double e = 7;

	while (e < phi) {
		track = gcd(e, phi);
		if (track == 1)
			break;
		else
			e++;
	}

	double d1 = 1 / e;
	double d = fmod(d1, phi);
	double message = 20;
	double c = pow(message, e);
	double m = pow(c, d);
	c = fmod(c, n);
	m = fmod(m, n);
	cout << "Original Message = " << message;
	cout << "\n" << "p = " << p;
	cout << "\n" << "q = " << q;
	cout << "\n" << "n = pq = " << n;
	cout << "\n" << "phi = " << phi;
	cout << "\n" << "e = " << e;
	cout << "\n" << "d = " << d;
	cout << "\n" << "Encrypted message = " << c;
	cout << "\n" << "Decrypted message = " << m;
	return 0;
}