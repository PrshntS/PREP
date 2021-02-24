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
	vector<int> freq(15, 0);
	int lim = 36000;
	while (lim--)
	{
		int die_1 = rand() % 6 + 1;
		int die_2 = rand() % 6 + 1;
		freq[die_1 + die_2]++;
	}
	for (int i = 2; i < 13; i++)
	{
		cout << "THE FREQUENCY OF: " << i << "===" << freq[i] << endl;
	}


	return 0;
}