#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll multiply(ll n,ll ans[],ll res_size);
void fact(ll n)
{
	ll ans[500];
	 ans[0]=1;
	ll res_size=1;
	for(ll x=2;x<=n;x++)
	{
		res_size=multiply(x,ans,res_size);
	}
	
	for(ll i=res_size-1;i>=0;i--)
	{
		cout<<ans[i];
	}
}
ll multiply(ll x,ll ans[],ll res_size)
{
	ll carry=0;
	for(ll i=0;i<res_size;i++)
	{
		ll prod=ans[i]*x+carry;
		ans[i]=prod%10;
		carry=prod/10;
	}
	while(carry)
	{
		ans[res_size]=carry%10;
		carry/=10;
		res_size++;
	}
	return res_size;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t; cin>>t;
	while(t--)
	{
		ll x; cin>>x;
		fact(x);

	}
	

	return 0;
}