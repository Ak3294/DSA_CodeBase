#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];

bool visited[N];

void dfs(int vertices)
{
    /* Take Action on vertex after
    ** entering the vertex
    */
    cout << vertices << endl;
    visited[vertices] = true;
    for (int child : graph[vertices])
    {
        cout << "Vertices" << vertices << " Child" << child << endl;
        if (visited[child] == true)
            continue;

        /** Take action on child before
         * entering the child node.
         */

        dfs(child);
    }
    /** Take action on child after
     * exiting the child node.
     */
}

/**
 *  Take action on vertex before
 *  exiting the vertex.
 */

int main()
{
    int v, e;
    cin >> v >> e;
    int v1, v2;
    for (int i = 0; i < e; ++i)
    {

        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    cin>>v1;
    dfs(v1);
}