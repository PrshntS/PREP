#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n; cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	set<ll> s;
	for(ll i=0;i<n;i++)
	{
		s.insert(a[i]);
	}
	ll count=0;
	for(ll i=0;i<n;i++)
	{
		if(s.find(a[i]-1)==s.end())
		{
			ll j=a[i];
			while(s.find(j)!=s.end())
			{
				j++;
			}
			count=max(count,j-a[i]);
		}
	}
	cout<<count;

	return 0;
}