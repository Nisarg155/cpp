#include<bits/stdc++.h>
using namespace std ;
void print(vector<int> &v,vector<int> &result,int &sum,int n,int i,int vsum)
{
    if(n == i)
    {
    if( sum == vsum)
    {
        for (int &x : result)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return;
    }
    

    result.push_back(v[i]);
    vsum += v[i];
    print(v,result,sum,n,i+1,vsum);

    result.pop_back();
    vsum -= v[i];
    print(v,result,sum,n,i+1,vsum);
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
    print(v,result,sum,n,0,0);
    return 0;
}