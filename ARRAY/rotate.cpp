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
	
	int t;
	cin >> t;
	while(t--){
		int n,e;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++)
		{
			int x; cin>>x;
			a.push_back(x);
			e=x;
		}
		for(int i=n-1;i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=e;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}