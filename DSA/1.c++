// Merge K Sorted Arrays
// Problem statement
// You have been given ‘K’ different arrays/lists, which are sorted individually (in ascending order). You need to merge all the given arrays/list such that the output array/list should be sorted in ascending order.

//solution
#include <bits/stdc++.h> 
using namespace std;

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    
    priority_queue<int,vector<int>,greater<int>> q;
    for(auto a:kArrays){
        for(auto i:a){
            q.push(i);
        }
    }

    vector<int> ans;
    while(!q.empty()){
        ans.push_back(q.top());
        q.pop();
    }
    return ans;
    // Write your code here. 
}
