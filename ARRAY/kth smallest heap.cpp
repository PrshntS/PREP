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
		priority_queue<int> max;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>a[i];
		}
		int k;
		cin>>k;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			max.push(a[i]);
			if(max.size()>k)
			{
				max.pop();
			}

		}
		cout<<max.top()<<endl;

		
	}

	return 0;
}