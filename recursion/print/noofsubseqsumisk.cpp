#include<bits/stdc++.h>
using namespace std ;
int print(vector<int> &v,vector<int> &result,int &sum,int n,int i,int vsum)
{
    if(n == i)
    {
    if( sum == vsum)
    {
        return 1;
    }
    return 0;
    }
    

    result.push_back(v[i]);
    vsum += v[i];
    int l = print(v,result,sum,n,i+1,vsum);

    result.pop_back();
    vsum -= v[i];
    int r = print(v,result,sum,n,i+1,vsum);

    return l+r ;
}
int main()
{
    int n,x,sum;
    cout<<"Enter number of elements :- ";
    cin>>n;
    vector<int> v,result;
    for(int i = 0;i<n ;i++)
    {
        cout<<" Element no "<< (i +1 )<<"  is :- ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter the sum to find subsequence :- ";
    cin>>sum;
    cout<<"the number of subsequence whoes sum is "<<sum <<" are "<<print(v,result,sum,n,0,0)<<endl;
    return 0;
}