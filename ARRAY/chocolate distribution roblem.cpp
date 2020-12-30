#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		cout<<1;
		vector<ll> a(n);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll m; cin>>m;
		ll mn=INT_MAX;
		sort(a.begin(),a.end());
		for(ll i=0;i+m-1<n;i++)
		{
			mn=min(mn,a[i+m-1]-a[i]);
		}
		cout<<mn<<endl;

	}
	

	return 0;
}