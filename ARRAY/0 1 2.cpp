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
		 int n;
	    cin>>n;
	    int a[n];
	    int x=0,y=0,z=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	        {
	            x++;
	        }
	        else if(a[i]==1)
	        {
	            y++;
	        }
	        else if(a[i]==2)
	        {
	            z++;
	        }
	    }
	    for(int i=0;i<x;i++)
	    {
	        a[i]=0;
	    }
	    for(int i=x;i<y+x;i++)
	    {
	        a[i]=1;
	    }
	    for(int i=x+y;i<n;i++)
	    {
	        a[i]=2;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	  
	    
	    cout<<endl;
	}

	return 0;
}