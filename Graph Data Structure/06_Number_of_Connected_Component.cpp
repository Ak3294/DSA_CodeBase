// Program to find out number of connected components in a graph.

/*
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

int DFS(vector<vector<int>> matrix)
{
    int count = 0;
    vector<bool> visited(vertex, false);
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            printDFSgraph(matrix, i, visited);
            count = count + 1;
        }
    }
    cout << "No. of Connected Component is :" << count << endl;
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
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int vertex, edge, fv, sv;
void BFSprint(vector<vector<int>> v, int sv, vector<bool> &visited)
{
    int vertex = v.size();

    queue<int> q;
    q.push(sv);
    visited[sv] = true;

    while (!q.empty())
    {
        int cv = q.front();
        q.pop();
        cout << cv << endl;
        for (int i = 0; i < vertex; i++)
        {
            if (v[cv][i] && visited[i] == false)
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

void BFS(vector<vector<int>> matrix)
{
    int count = 0;
    vector<bool> visited(vertex, false);
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            count = count + 1;
            BFSprint(matrix, i, visited);
        }
    }
    cout << "No. of Connected Components is :" << count << endl;
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
    }
    cout << "Our Graph is (Acc. to BFS)" << endl;
    BFS(matrix);
    return 0;
}