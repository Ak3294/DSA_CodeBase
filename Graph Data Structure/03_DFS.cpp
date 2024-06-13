// Implement the Graph using Adjecency matrix(Un-Directed)- DFS(Only work for Connected Graph not for Disconnected graph)
// DFS : Depth First Search -> Traverse tree up to down

#include <iostream>
#include <vector>
using namespace std;

void printgraph(vector<vector<int>> v, int sv, vector<bool> &visited)
{
    cout << sv << endl;
    visited[sv] = true;
    int vertex = v.size();
    for (int i = 0; i < vertex; i++)
    {
        if (v[sv][i] == 1 && visited[i] == false)
        {
            printgraph(v, i, visited);
        }
    }
}

int main()
{
    int vertex, edge, fv, sv;
    cout << "Enter the No. of Vertex :";
    cin >> vertex;
    cout << "Enter the No. of Edges :";
    cin >> edge;

    vector<vector<int>> matrix(vertex, vector<int>(vertex, 0));
    for (int i = 1; i <= edge; i++)
    {
        cout << "Enter the First and Second Vertex(fv,sv)" << endl;
        cin >> fv >> sv;
        matrix[fv][sv] = 1;
        matrix[sv][fv] = 1;
    }
    vector<bool> visited(vertex, false);
    cout << "Our Graph is(According to Depth First Search)" << endl;
    printgraph(matrix, 0, visited);
    return 0;
}