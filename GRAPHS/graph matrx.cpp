#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
class graph
{
	bool** adjmat;
	int numvert;
public:
	graph(int numvert)
	{
		this->numvert = numvert;
		adjmat = new bool*[numvert];
		for (ll i = 0; i < numvert; i++)
		{
			adjmat[i] = new bool[numvert];
			for (ll j = 0; j < numvert; j++)
			{
				adjmat[i][j] = false;
			}
		}
	}
	void add_edge(int i, int j)
	{
		adjmat[i][j] = true;
		adjmat[j][i] = true;

	}
	void remove_edge(int i, int j)
	{
		adjmat[i][j] = false;
		adjmat[j][i] = false;
	}
	void print()
	{
		for (int i = 0; i < numvert; i++)
		{
			for (int j = 0; j < numvert; j++)
			{
				cout << adjmat[i][j] << " ";
			}
			cout << endl;
		}
	}
	~graph()
	{
		for (int i = 0; i < numvert; i++)
		{
			delete[] adjmat[i];
		}
		delete[] adjmat;
	}
};
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	graph g(4);

	g.add_edge(0, 1);
	g.add_edge(0, 2);
	g.add_edge(1, 2);
	g.add_edge(2, 0);
	g.add_edge(2, 3);
	g.print();



	return 0;
}