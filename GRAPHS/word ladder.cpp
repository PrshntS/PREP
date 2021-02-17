#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx INT_MAX
#define mn INT_MIN
#define pb push_back
int ans(string start, string target, set<string>& D)
{
	if (D.find(target) == D.end())
	{
		return 0;
	}
	queue<string> q;
	int count = 0;
	q.push(start);
	while (!q.empty())
	{
		++count;
		for (int i = 0; i < q.size(); i++)
		{
			string word = q.front();
			q.pop();
			for (int j = 0; j < word.size(); j++)
			{
				char og = word[j];
				for (char c = 'a'; c <= 'z'; c++)
				{
					word[j] = c;
					if (word == target)
					{
						return count + 1;
					}
					if (D.find(word) == D.end())
					{
						continue;
					}
					D.erase(word);
					q.push(word);
				}
				word[j] = og;
			}
		}
	}
	return 0;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	set<string> D;
	D.insert("poon");
	D.insert("plee");
	D.insert("same");
	D.insert("poie");
	D.insert("plie");
	D.insert("poin");
	D.insert("plea");
	string start = "toon";
	string target = "plea";
	cout << "Length of shortest chain is: "
	     << ans(start, target, D);
	return 0;




}