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
		ll N,D;
		cin>>N>>D;
		ll nr=0;
		for(ll i=0;i<N;i++)
		{
			ll x; cin>>x;
			if(x<=9||x>=80)
			{
				nr++;
			}
		}
		ll r=N-nr;
		cout<<((r+D-1)/D)+((nr+D-1)/D)<<endl;
	}

	return 0;
}