#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);  
	#endif
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll m; cin>>m;
		ll mn=INT_MAX;
		sort(a,a+n);
		for(ll i=0;i+m-1<n;i++)
		{
			mn=min(mn,a[i+m-1]-a[i]);
		}
		cout<<mn<<endl;
		cout<<1;

	}
	

	return 0;
}