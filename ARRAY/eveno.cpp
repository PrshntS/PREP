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
		ll a,b,e1,e2;
		cin>>a>>b;
		if(a%2==0)
		{
			e1=a/2;

		}
		else
		{
			e1=a-a/2;
		}
		if(b%2==0)
		{
			e2=b/2;

		}
		else
		{
			e2=b-b/2;
		}
		cout<<e1*e2+(a-e1)*(b-e2)<<endl;

	}

	return 0;
}