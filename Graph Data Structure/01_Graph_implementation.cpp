// How to Implement Graphs
// 1. Edge List - Worst case of Implement Graph(Big Oh(n^2))
// 2. Adjancy List
// 3. Adjancy Matrix : when number of true value is very few than it its called sparsh graph.

// Implement the Graph using Adjecency matrix(Directed)

#include <iostream>
#include <vector>
using namespace std;

void printgraph(vector<vector<int>> v, int sv)
{
    cout << sv << endl;
    int vertex = v.size();
    for (int i = 0; i < vertex; i++)
    {
        if (v[sv][i] == 1)
        {
            printgraph(v, i);
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
    }
    cout << "Our Graph is " << endl;
    printgraph(matrix, 1);
    return 0;
}
