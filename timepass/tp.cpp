#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int > res(2,-1);

        vector<int>::iterator it = lower_bound(nums.begin(),nums.end(),target);

        if(it == nums.end() || (*it != target ))
        {
            return res;
        }
        else {
            res[0] = it - nums.begin();

            for (auto i = it; i != nums.end(); i++)
            {
                if( *it != target)
                {
                    res[1] = it - nums.begin() - 1 ;
                    break;
                }
                
            }
        }
        if(res[1] == -1)
        {
            res[1] = res[0];
            return res;
        }
    }
};
int main()
{
int tar;
int n;
cin>>n;
vector <int> v(n,0);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
}

cin>>tar;

Solution s;

s.searchRange(v,tar);
return 0;
}
