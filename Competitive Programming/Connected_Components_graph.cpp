// GRAPH Program to find how many components are connected components.
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];

vector<int> graph[N];

void dfs(int vertices)
{
    vis[vertices] = true;
    for (int child : graph[vertices])
    {
        if (vis[child] == true)
            continue;

        dfs(child);
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
        // This is Unbdirected Graph
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    int count = 0;
    for (int i = 1; i <= v; ++i)
    {
        if (vis[i] == true)
            continue;
        dfs(i);
        count++;
    }
    cout << "Connected Components are :" << count;
}
