#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(vector<vector<int>> &ans,vector<int> &v,vector<int> &ds,int ind)
{
        ans.push_back(ds);

    for (int i = ind; i < v.size(); i++)
    {
        if(i!=ind && v[i] == v[i-1])
        continue;

        ds.push_back(v[i]);
        subset(ans,v,ds,i+1);
        ds.pop_back();
    }
    
}
int main()
{
int n;
cout<<"Enter the num of ele :- ";
cin>>n;
vector<int> v(n,0),ds;
vector<vector<int>> ans;
for (int i = 0; i < n; i++)
{
    cout<<"Enter ele no  "<<(i+1)<<" :- ";
    cin>>v[i];
}
sort(v.begin(),v.end());
subset(ans,v,ds,0);

for (int i = 0; i < ans.size(); i++)
{
    for (int j = 0; j<ans[i].size(); j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    
}





return 0;
}