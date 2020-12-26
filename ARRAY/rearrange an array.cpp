#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];

	}
	int i=-1,j=n;
	while(i<j)
	{
		while(i<n&&a[i]>0)
		{
			i++;
		}
		while(j>=0&&a[j]<0)
		{
			j--;
		}
		if(i<j)
		{
			swap(a[i],a[j]);
		}


	}
	int k=0;
	while(i<n&&k<n)
	{
		swap(a[i],a[k]);
		k+=2;
		i+=1;
	}
	

	return 0;
}