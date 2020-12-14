#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx INT_MAX
#define mn INT_MIN
#define f(i,s,e) for(ll i=(s);i<(e);i++)
#define mod 1e9+7
#define V 4
bool isbi(int G[][V], int init) 
{ 
    int color[V]; 
    for (int i = 0; i < V; ++i) 
        color[i] = -1; 
  
    color[init] = 1; 
   
    queue <int> q; 
    q.push(init); 
   
    while (!q.empty()) 
    { 
        int u = q.front(); 
        q.pop(); 
  
        if (G[u][u] == 1) 
        return false;  
  
        for (int v = 0; v < V; ++v) 
        { 
            if (G[u][v] && color[v] == -1) 
            { 
                color[v] = 1 - color[u]; 
                q.push(v); 
            } 
  
            else if (G[u][v] && color[v] == color[u]) 
                return false; 
        } 
    } 
  
    return true; 
} 

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int G[][V] = {{0, 1, 0, 1}, 
		        {1, 0, 1, 0}, 
		        {0, 1, 0, 1}, 
		        {1, 0, 1, 0} 
    }; 
  
    isbi(G, 0) ? cout << "Yes" : cout << "No"; 

		
	

	return 0;
}