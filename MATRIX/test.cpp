#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define max 1000005
#define min INT_MIN

bool prime[max + 1];
long long count[max];
void sieve()
{
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p  <= max; p++)
	{
		if (prime[p] == true)
		{

			for (int i = p * p; i <= max; i += p)
				prime[i] = false;
		}
	}


}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	sieve();

	count[0] = 0;
	count[1] = 0;
	count[2] = 0;
	count[3] = 0;

	for (int i = 3; i < max - 3; i++)
	{
		if (prime[i] && prime[i - 2])
		{
			count[i] = count[i - 1] + 1;
		}
		else
		{
			count[i] = count[i - 1];
		}
	}



	ll t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cout << count[n] << endl;


	}
	return 0;
}