#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx INT_MAX
#define mn INT_MIN
#define f(i,s,e) for(ll i=(s);i<(e);i++)
#define mod 1e9+7
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int all_max=0;
	int curr_max=0;
	for(int i=0;i<n;i++)
	{
		curr_max+=a[i];
		if(curr_max<0)
		{
			curr_max=0;
		}
		if(curr_max>all_max)
		{
			all_max=curr_max;
		}
	}
	cout<<all_max;

	return 0;
}