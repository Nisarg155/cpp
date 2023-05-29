#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    void permutation(vector<vector<int>>&ans,vector<int>&nums,vector<int>&ds,vector<bool>&v)
    {
        if(ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size() ; i++)
        {
            if(v[i] == false)
            {
                v[i] = true;
                ds.push_back(nums[i]);
                permutation(ans,nums,ds,v);
                v[i] = false;
                ds.pop_back();
            }
        }
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<bool> v(nums.size(),false);
        permutation(ans,nums,ds,v);
        return ans;
    }
};
int main()
{
    vector<int>v{1,1,2};
    Solution s;
    vector<vector<int>> x = s.permute(v);
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    

return 0;
}