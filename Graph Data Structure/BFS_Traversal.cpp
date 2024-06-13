//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        // Create a bfs vector to store result
        vector<int> bfs;
        // Initialize all the vertex to false when visted then changed to true
        vector<bool> visited(V, false);

        for (int i = 0; i < V; ++i)
        {
            // if node is not visited
            if (!visited[i])
            {
                // Create a queue
                queue<int> q;
                // change false to true
                visited[i] = true;
                // push in queue
                q.push(i);

                // BFS starting from ith node
                while (!q.empty())
                {
                    int frontnode = q.front();
                    q.pop();
                    bfs.push_back(frontnode);
                    for (auto it : adj[frontnode])
                    {
                        if (!visited[it])
                        {
                            visited[it] = true;
                            q.push(it);
                        }
                    }
                }
            }
        }
        return bfs;
    }
};

int main()
{
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        // If directed Graph
        adj[u].push_back(v);
        // If Undirected Graph include both
        adj[v].push_back(u);
    }
    Solution obj;
    vector<int> ans = obj.bfsOfGraph(V, adj);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}