#include<bits/stdc++.h>
using namespace std;
#define ll long long
int merge(int a[],int temp[],int left,int mid,int right)
{
	int i,j,k;
	i=left;
	j=mid;
	k=left;
	int inv_count=0;
	while((i<=mid-1)&&j<=right)
	{
		if(a[i]<=a[j])
		{
			temp[k++]=a[i++];

		}
		else
		{
			temp[k++]=a[j++];
			inv_count+=mid-i;

		}
	}
	while(i<=mid-1)
	{
		temp[k++]=a[i++];

	}
	while(j<=right)
	{
		temp[k++]=a[j++];
	}
	for(i=left;i<=right;i++)
	{
		a[i]=temp[i];
	}
	return inv_count;

}
int _mergesort(int a[],int temp[],int left,int right)
{
	int mid,inv_count=0;
	if(right>left)
	{
		mid=(left+right)/2;
		inv_count+=_mergesort(a,temp,left,mid);
		inv_count+=_mergesort(a,temp,mid+1,right);

		inv_count+=merge(a,temp,left,mid+1,right);
	}
	return inv_count;
}
int mergesort(int a[],int n)
{
	int temp[n];
	return _mergesort(a,temp,0,n-1);
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
	}
	cout<<mergesort(a,n);

	return 0;
}