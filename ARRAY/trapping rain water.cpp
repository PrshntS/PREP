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
	ll ans=0;
	for(ll i=1;i<n-1;i++)
	{
		ll left=a[i];
		for(ll j=0;j<i;j++)
		{
			left=max(left,a[j]);
		}
		ll right=a[i];
		for(ll j=i+1;j<n;j++)
		{
			right=max(right,a[j]);
		}
		ans+=min(left,right)-a[i];

	}
cout<<ans;
	

	return 0;
}