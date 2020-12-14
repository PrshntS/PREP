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
	ll sum;
	cin>>sum;
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		m[a[i]]++;
	}
	ll count=0;
	for(int i=0;i<n;i++)
	{
		count+=m[sum-a[i]];
		if(sum-a[i]==a[i])
		{
			count--;
		}
	}
	cout<<count/2;

	return 0;
}