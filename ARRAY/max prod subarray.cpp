#include<bits/stdc++.h>

#define ll long long
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n; cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>n;
	}
	ll one=1;
	ll max_ending_here=1;
	ll min_ending_here=1;
	ll mx_so_far=0;
	ll flag=0;
	for(ll i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			max_ending_here=max_ending_here*a[i];
			min_ending_here=min(min_ending_here*a[i],one);
			flag=1;
		}
		else if(a[i]=0)
		{
			max_ending_here=1;
			min_ending_here=1;
		}
		else
		{
			ll temp=max_ending_here;
			max_ending_here=max(min_ending_here*a[i],one);
			min_ending_here=temp*a[i];
		}
		if(mx_so_far<max_ending_here)
		{
			mx_so_far=max_ending_here;
		}
	}
	cout<<mx_so_far;
	

	return 0;
}