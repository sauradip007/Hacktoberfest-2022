#include <iostream>
#include <stack>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
#include<queue>
using namespace std;
vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;//min heap
    for(int i = 0 ; i < mat.size(); i++)
    {
        int c1 = 0;
        for(int j = 0 ; j < mat[i].size(); j++)
        {
            if(mat[i][j] == 1)
            c1++;

            
        }
        pq.push(make_pair(c1, i));
    }
    vector<int>ans;
    for(int i = 0; i < k; i++)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
    
}