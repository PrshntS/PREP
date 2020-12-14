#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx INT_MAX
#define mn INT_MIN
#define f(i,s,e) for(ll i=(s);i<(e);i++)
#define mod 1e9+7
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	ll n; cin>>n;
	vector<ll> a;
	for (int i = 0; i < n; ++i)
	{
		ll x; cin>>x;
		a.push_back(x);
	}
	ll i=0,count=1;
	while(i<n-1)
	{
		if(a[i]==0&&i!=n-1)
		{
			return -1;
		}
		else
		{
			map<ll,ll> m;
			int mxx=mn;
			for(ll k=1;k<=a[i];k++)
			{
				m


			}
		}
	}
	cout<<count;

	return 0;
}