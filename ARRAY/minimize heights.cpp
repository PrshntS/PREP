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
	int n,k;
	cin>>n>>k;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		int x; cin>>x;
		a.push_back(x);


	}
	sort(a.begin(),a.end());
	int result=a[n-1]-a[0];
	for(int i=1;i<n;i++)
	{
		int mn=min(a[0]+k,a[i]-k);
		int mx=max(a[n-1]-k,a[i-1]+k;);
		result=min(result, mx-mn);
	}
	cout<<result;

	return 0;
}