#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adjList;
public:
    Graph(int v)
    {
        V = v;
        adjList = new list<int>[V];
    }

    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void dfsHelper(int node, vector<bool>& visited, vector<int>& temp)
    {
        visited[node] = true;
        temp.push_back(node);

        for (auto neighbour : adjList[node])
        {
            if (!visited[neighbour])
            {
                dfsHelper(neighbour, visited, temp);
            }
        }

    }

    long long dfs(int lib_cost, int road_cost)
    {

        vector<bool> visited(V, false);
        long long total_cost = 0;

        for (int i = 1; i < V; i++)
        {
            if (!visited[i])
            {
                vector<int> temp;
                dfsHelper(i, visited, temp);

                total_cost += (temp.size() - 1) * road_cost;
                total_cost += lib_cost;

            }
        }

        return total_cost;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int q;
    cin >> q;

    while (q--)
    {
        int n, m, lib_cost, road_cost;
        cin >> n >> m >> lib_cost >> road_cost;
        Graph g(n + 1);
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            g.addEdge(u, v);
        }
        int case1 = g.dfs(lib_cost, road_cost);
        int case2 = n * lib_cost;
        cout << min(case1, case2) << endl;
    }
}