#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];
int parent[N]; // Array to store parent of each vertex

vector<int> graph[N];

bool hasCycle = false; // Flag to indicate whether cycle is present or not

void dfs(int vertices, int par)
{
    vis[vertices] = true;
    parent[vertices] = par; // Set the parent of current vertex
    for (int child : graph[vertices])
    {
        if (vis[child] == false)
            dfs(child, vertices);
        else if (child != par) // If the child is not the parent of current vertex, then cycle exists
            hasCycle = true;
    }
}

int main()
{
    int v, e;
    cout << "Enter the No. of Vertex:";
    cin >> v;
    cout << "Enter the No. of Edges:";
    cin >> e;
    for (int i = 0; i < e; ++i)
    {
        int v1, v2;
        cout << "Source vertices:";
        cin >> v1;
        cout << "Destination Vertices:";
        cin >> v2;
        // This is Directed Graph
        graph[v1].push_back(v2);
        }

    for (int i = 1; i <= v; ++i)
    {
        if (!vis[i])    // If the vertex is not visited, perform DFS
            dfs(i, -1); // Initial parent is -1
    }

    if (hasCycle)
        cout << "Cycle is present in the graph." << endl;
    else
        cout << "Cycle is not present in the graph." << endl;

    return 0;
}
