#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t; cin>>t;
	while(t--)
	{
		ll n,k,d;
		vector<ll> a(n);
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		ll day=sum/k;
		if(day>=d)
		{
			cout<<d;
		}
		else
		{
			cout<<day;
		}

		cout<<endl;


	}

	

	return 0;
}