#include<bits\stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int,list<int>>adj;

        void addEdge(int u, int v,bool direction){
            //Suppose direction = 0 --> Undirected
            //        direction = 1 --> Directed

            //Create an edge from u to v
            adj[u].push_back(v);
            if(direction==0){
                adj[v].push_back(u);
            }
        }

        void printAdj_list(){
            for(auto i:adj){
                cout<<i.first<<"->";
                for(auto j : i.second){
                    cout<<j<<",";
                }
                cout<<endl;
            }
        }

};


int main(){
    int n;
    cout<<"Enter the Number of Nodes"<<endl;
    cin>>n;

    int m;
    cout<<"Enter the Number of Edges"<<endl;
    cin>>m;

    Graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        // Creating the Undirected Graph
        g.addEdge(u,v,0);
    }

    g.printAdj_list();
}