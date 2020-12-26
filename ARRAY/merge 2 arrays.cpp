#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll m,n;
	cin>>m>>n;
	ll a[m],b[n];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		int last=a[m-1];
		int j;
		for(j=n-2;j>0 && a[j]>b[i];j--)
		{
			a[j+1]=a[j];
		}
		if(j!=n-2 || last>b[i])
		{
			a[j+1]=b[i];
			b[i]=last;
		}

	}
	

	return 0;
}