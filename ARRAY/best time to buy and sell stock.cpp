#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n; cin>>n;
	vector<ll> v;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	ll profit=0;
	ll minn=INT_MAX;
	for(int i=0;i<n;i++)
	{
		minn=min(minn,v[i]);
		profit=max(profit,v[i]-minn);
	}
	cout<<profit;
	

	return 0;
}