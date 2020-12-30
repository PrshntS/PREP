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
	ll left[n],right[n];
	ll ans=0;
	left[0]=a[0];
	for(ll i=1;i<n;i++)
	{
		left[i]=max(left[i-1],a[i]);
	}
	right[n-1]=a[n-1];
	for(ll i=n-2;i>=0;i--)
	{
		right[i]=max(right[i+1],a[i]);
	}
	for(ll i=0;i<n;i++)
	{
		ans+=min(left[i],right[i])-a[i];
	}
	cout<<ans<<endl;

	

	return 0;
}