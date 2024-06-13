/* Graph : It is a Non-linear datastructure which is collection of vertices and edges.
-> Directed Graph
-> Undirected Graph
-> Stringly Connected Components
*/
/* Tree : It is also a non-linear Graph Data Structure which have no cycle.
-> Subtree
-> Leaf Node 
-> Root Node
*/

// Tree and Graph Implementation
// There are 2 methods to represent the Tree and Graph which is Adjacency Matrix and Adjacency List.

// Graph Implementation
#include<bits/stdc++.h>
using namespace std;

// graph1 represents the adjacency matrix representation of Graph.
// graph2 represents the adjacency list representation of Graph.

const int N = 1e3+10;
int graph1[N][N]; // space complexity of Adjacency Matrix is O(N^2)

// vector<int>graph2[N]; // Space Complexity of Adjacency Matrix without weight is O(N+M)
vector<pair<int,int>>graph2[N];

int main(){
    int v,e;
    cin>>v;
    cin>>e;

    int graph[v+1][v+1];
    for(int i=0;i<e;i++){
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        // Adjacency Matrix filling without weight
        graph1[v1][v2]==1;
        graph1[v2][v1]==1;

        // Adjacency Matrix filling with weight
        graph1[v1][v2]==wt;
        graph1[v2][v1]==wt;

        // adjacency list filling without weight
        // graph2[v1].push_back(v2);
        // graph2[v2].push_back(v1);

        // adjacency list filling with weight
        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});


    }

}

/*

DIFFERENCE BETWEEN ADJACENCY MATRIX AND ADJACENCY LIST

            ADJACENCY MATRIX                                        ADJACENCY LIST
    1.) Space Complexity is Very High O(N^2).               1.) Space Complexity is Low O(V+E)
    2.) find Connectivity and weight Information in O(1).   2.) It will take O(N) time. 

*/