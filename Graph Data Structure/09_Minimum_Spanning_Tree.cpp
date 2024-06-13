// Minimum Spanning Tree : Sum of weights should be minimum.
// For Finding the Minimum Spanning Tree we have 2 Algorithms.
// 1. Kruskal Algorithms(Greedy Algorithms)
// 2. Prims Algorithms

// KRUSKAL ALGORITHMS
// step-1 : Sort the edges according to weight.
// step-2 : Pick the sorted edge one by one and edge should not make cycle(we need cycle detection Algorithm).

// Disjoint-Set(for cycle detection in Kruskal Algorithms)
// Make set : [Create set with 1 element]
// Union :[take 2 set and merge them into 1]
// Find :[return a representive element for that set]

// Note :- sets means component
// If 2 element lies in same set that means they lie in same connected component.

//Union(1, 2) = {1 *, 2} ----->find(1) = 1, find(2) = 1;
//Union(2, 3) = {1 *, 2, 3} ----->find(1) = 1, find(2) = 1, find(3) = 1;
//Union(4, 5) = {4 *, 5} ----->find(4) = 4, find(5) = 4;
//Union(6, 7) = {6 *, 7} ----->find(6) = 6, find(7) = 6;
//Union(5,6) = {4*,5,6,7} ----->find(4) = 4, find(5) = 4 ,find(6)=4 , find(7)=4;
//Union(3,7) = {1*,2,3,4,5,6,7} ----->find(1,2,3,4,5,6,7)=1;

// code for the following steps
/*

makeset(i){
    parent[i]=i;
}
find(i){
    while(parent[i]!=i){
        i=parent[i];
    }
}
union(x,y){
    a=find(x);
    b=find(y);
    parent[a]=b;
}

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void makeSet(int Node, int parent[])
{
    for (int i = 1; i <= Node; i++)
    {
        parent[i] = i;
    }
}

int find(int i, int parent[])
{
    while (parent[i] != i)
    {
        i = parent[i];
    }
    return i;
}

bool cmp(vector<int> A, vector<int> B)
{
    return A[2] < B[2];
}

int Solution::solve(int Node, vector<vector<int>> &edges)
{
    sort(edges.begin(), edges.end(), cmp); //sorting edges on the besis of weights

    int parent[Node + 1];
    makeSet(Node, parent);

    int cost = 0;
    for (int i = 0; i < edges.size(); i++)
    {
        int s = edges[i][0];
        int d = edges[i][1];

        int rs = find(s, parent);
        int rd = find(d, parent);
        if (rs != rd)
        {
            cost = cost + edges[i][2];
            parent[rs] = rd;
        }
    }
    return cost;
}