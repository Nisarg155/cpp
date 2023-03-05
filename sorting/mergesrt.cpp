#include<bits/stdc++.h>
using namespace std ;
void merge_the_arr(vector<int> &v,int begin ,int mid,int end)
{
    vector <int> a1,a2;
    vector<int> a3;
    for (int i = begin; i <= mid; i++)
    {
        a1.push_back(v[i]);
    }
    for (int i = mid +1; i <= end; i++)
    {
        a2.push_back(v[i]);
    }
    a1.push_back(INT_MAX);
    a2.push_back(INT_MAX);
    int left = 0, right = 0,p = 0;
    int n1 = a1.size() -1,n2 = a2.size() -1,n3 = n1+n2;
    while ((left<n1)||(right<n2) && p < n3)
    {
        if(a1[left]<=a2[right])
        {
            a3.push_back(a1[left++]);
            p++;
        }
        else
        {
            a3.push_back(a2[right++]);
            p++;
        }
    }
    for (int i = begin,y = 0; i <=end; i++,y++)
    {
        v[i] = a3[y];
    }
}
void ms(vector<int> &v,int begin,int end)
{
    if(begin >= end)
    {
        return;
    }
    int mid = (begin + end )/2;
    ms(v,begin,mid);
    ms(v,mid+1,end);
    merge_the_arr(v,begin,mid,end);

}


int main()
{
    int n,x;
    cout<<"No. of ele in array :- ";
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter ele no "<<(i+1)<<" :- ";
        cin>>x;
        v.push_back(x);
    }

    ms(v,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<"Ele no "<<(i+1)<<" is :- "<<v[i]<<endl;
    }
    return 0;
}