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
		string a;
		cin>>a;
		int n=a.length();
		for(int i=0;i<n/2;i++)
		{
			swap(a[i],a[n-i-1]);
		}
		cout<<a<<endl;
	}

	return 0;
}