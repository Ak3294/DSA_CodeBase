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
    vector<bool> visited(vertex, false);
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            BFSprint(matrix, i, visited);
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
    }
    cout << "Our Graph is (Acc. to BFS)" << endl;
    BFS(matrix);
    return 0;
}