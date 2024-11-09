#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // CODE BLOCK - 1

    // vector<pair<int,int>>v={{1,1},{2,2},{3,3},{4,4},{5,5}};
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }

    // CODE BLOCK - 2

    // vector<pair<int,string>>p;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     string y;
    //     cin>>x>>y;
    //     p.push_back({x,y});
    // }
    // for(int i=0;i<p.size();i++){
    //     cout<<p[i].first<<" "<<p[i].second<<endl;
    // }

    // Difference Between "Array of Vectors" and "vector of Vector".

    // CODE BLOCK - 4 :  Vector of Vector

    cout << "How Many vector you want to Create." << endl;
    int N, n, x;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the Size of vector " << (i + 1) << endl;
        cin >> n;
        v.push_back(vector<int>());
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            v[i].push_back(x);
        }
        v.push_back(v[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

    // CODE BLOCK :3 - Array of Vector

    // cout << "How Many vector you want to Create." << endl;
    // int N, n, x;
    // cin >> N;
    // vector<int> v[N]; // N Vectors are Created
    // for (int i = 0; i < N; i++)
    // {
    //     cout << "Enter the Size of vector " << (i + 1) << endl;
    //     cin >> n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }

    // for (int i = 0; i < N; i++)
    // {
    //     printVec(v[i]);
    // }
}