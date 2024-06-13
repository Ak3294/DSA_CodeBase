#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust){
        vector<int>vec(n+1,0);
        for(auto it:trust){
            vec[it[0]]--; // outdegree
            vec[it[1]]++; // indegree
        }
        for(int i=1;i<=n;i++){
            int x = vec[i];
            if(x==n-1) return i;
        }
        return -1;
    }

};
