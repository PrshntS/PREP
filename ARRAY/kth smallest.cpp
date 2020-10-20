#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}		
		int k; cin>>k;
		sort(a,a+n);
		cout<<a[k-1]<<endl;
	}

	return 0;
}