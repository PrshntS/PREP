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
		ll d1,v1,d2,v2,t;
		ll count=0;
		cin>>d1>>v1>>d2>>v2>>t;
		if(d1==d2)
		{
			count=(t+(v1+v2)-1)/(v1+v2);
			if(d1>1)
			{
				count+=d1-1;
			}

		}
		else
		{
			if(d1>d2)
			{
				for(int i=d2;i<d1&&t>0;i++)
				{
					t-=v2;
					count++;
				}
				ll rem=(t+(v1+v2)-1)/(v1+v2);
				count+=rem;
				if(d2>1)
				{
					count+=d2-1;
				}
			}
			else
			{
				for(int i=d1;i<d2&&t>0;i++)
				{
					t-=v1;
					count++;
				}
				ll rem=(t+(v1+v2)-1)/(v1+v2);
				count+=rem;
				if(d1>1)
				{
					count+=d1-1;
				}

			}
			
		}
		cout<<count<<endl;
	}

	return 0;
}