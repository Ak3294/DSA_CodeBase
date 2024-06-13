#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int V;
    list<int> *adj;
    Graph(int);

    void addEdge(int, int);
    vector<int> BFS(int, int, int[]);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V + 1];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> Graph::BFS(int componentNum, int src, int visited[])
{
    queue<int> queue;

    queue.push(src);
    visited[src] = componentNum;
    vector<int> reachableNodes;

    while (!queue.empty())
    {

        int u = queue.front();
        queue.pop();

        reachableNodes.push_back(u);

        for (auto itr = adj[u].begin(); itr != adj[u].end(); itr++)
        {
            if (!visited[*itr])
            {
                visited[*itr] = componentNum;
                queue.push(*itr);
            }
        }
    }
    return reachableNodes;
}
void displayReachableNodes(int n, unordered_map<int, vector<int>> m)
{
    vector<int> temp = m[n];
    for (int i = 0; i < temp.size(); i++)
        cout << temp[i] << " ";

    cout << endl;
}

void findReachableNodes(Graph g, int arr[], int n)
{
    int V = g.V;

    int visited[V + 1];
    memset(visited, 0, sizeof(visited));
    unordered_map<int, vector<int>> m;

    int componentNum = 0;
    for (int i = 0; i < n; i++)
    {
        int u = arr[i];
        if (!visited[u])
        {
            componentNum++;
            m[visited[u]] = g.BFS(componentNum, u, visited);
        }

        cout << "Reachable Nodes from " << u << " are\n";
        displayReachableNodes(visited[u], m);
    }
}

int main()
{
    int vertex, edge, fv, sv;

    cout << "Enter the No. of Vertex :";
    cin >> vertex;
    Graph g(vertex);
    cout << "Enter the No. of Edges :";
    cin >> edge;
    for (int i = 1; i <= edge; i++)
    {
        cout << "Enter the First and Second Vertex(fv,sv)" << endl;
        cin >> fv >> sv;
        g.addEdge(fv, sv);
    }
    int arr[1];
    cout << "Enter the Starting Node :";
    cin >> arr[0];
    int n = sizeof(arr) / sizeof(int);
    findReachableNodes(g, arr, n);
    return 0;
}
