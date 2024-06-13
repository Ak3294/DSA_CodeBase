#include <iostream>
#include <vector>
using namespace std;

int vertex, edge, fv, sv;
void printDFSgraph(vector<vector<int>> v, int sv, vector<bool> &visited)
{
    cout << sv << endl;
    visited[sv] = true;
    int vertex = v.size();
    for (int i = 0; i < vertex; i++)
    {
        if (v[sv][i] == 1 && visited[i] == false)
        {
            printDFSgraph(v, i, visited);
        }
    }
}

void DFS(vector<vector<int>> matrix)
{
    vector<bool> visited(vertex, false);
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            printDFSgraph(matrix, i, visited);
        }
    }
}

int main()
{

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

    cout << "Our Graph is(According to Depth First Search)" << endl;
    DFS(matrix);

    return 0;
}