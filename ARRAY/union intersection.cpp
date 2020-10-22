#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,m;
	cin>>n>>m;
	int a1[n],a2[m];
	for(int i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>a2[i];
	}
	int i=0,j=0;
	cout<<"UNION"<<endl;
	while(i<n&&j<m)
	{
		if(a1[i]<a2[j])
		{
			cout<<a1[i]<<" ";
			i++;
		}
		else if(a2[j]<a1[i])
		{
			cout<<a2[j]<<" ";
			j++;
		}
		else
		{
			cout<<a1[i]<<" ";
			i++;
			j++;
		}
	}
	while(i<n)
	{
		cout<<a1[i]<<" ";
		i++;
	}
	while(j<m)
	{
		cout<<a2[j]<<" ";
		j++;
	}
	cout<<endl<<"INTERSECTION"<<endl;
	i=0,j=0;
	while(i<n&&j<m)
	{
		if(a1[i]<a2[j])
		{
			i++;
		}
		else if(a2[j]<a1[j])
		{
			j++;
		}
		else{
			cout<<a1[i]<<" ";
			i++;
			j++;
		}
	}
	

	
	

	return 0;
}