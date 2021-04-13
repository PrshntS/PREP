#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int gcd(int a, int h)
{
	int temp;
	while (1)
	{
		temp = a % h;
		if (temp == 0)
			return h;
		a = h;
		h = temp;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double p = 5;
	double q = 3;
	double n = p * q;
	double e = 2;
	double phi = (p - 1) * (q - 1);
	while (e < phi)
	{
		if (gcd(e, phi) == 1)
			break;
		else
			e++;
	}
	int k = 2;
	double d = (1 + (k * phi)) / e;
	double msg = 20;
	printf("Message  = %lf", msg);
	double c = pow(msg, e);
	c = fmod(c, n);
	printf("\nEncrypted data = %lf", c);
	double m = pow(c, d);
	m = fmod(m, n);
	printf("\nOriginal Message Sent = %lf", m);
	return 0;
}