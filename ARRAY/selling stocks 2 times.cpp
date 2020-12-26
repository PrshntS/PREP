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
	ll profit [n];
	profit[n-1]=0;
	ll max_so_far=a[n-1];
	for(ll i=n-2;i>=0;i--)
	{
		profit[i]=max(profit[i+1],max_so_far-a[i]);
		max_so_far=max(max_so_far,a[i]);
	}
	ll min_so_far=a[0];
	for(ll i=1;i<n;i++)
	{
		profit[i]=max(profit[i-1],(a[i]-min_so_far)+profit[i]);
		min_so_far=min(min_so_far,a[i]);
	}
	cout<<profit[n-1];

	

	return 0;
}