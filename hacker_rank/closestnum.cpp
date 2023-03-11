#include<bits/stdc++.h>
using namespace std ;




int main()
{
    vector <long int > v1 ,v2;
    int n,x;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    while (cin>>x)
    {
        v2.push_back(x);
    }
    int high , low , mid ,size = v2.size(),flag = 0;
    for (int i = 0; i < size; i++)
    {
        x = v2[i];
        high = n-1;
        low = 0;
        flag = 0;
        
        while (low<= high)
        {
            mid = (high +low)/2;

            if (v1[mid] == x)
            {
                cout<<v1[mid]<<" ";
                flag = 1;
                break;
            }
            else if(v1[mid]>x)
            high = mid -1;
            else
            low = low +1;
        }
        if(flag == 0)
        {
            if(low != 0 || low != n-1)
            {
                if(abs(v1[low] -x) < abs(v1[low - 1] - x) )
                cout<<v1[low -1];
            }
            else if(low>n-1)
            cout<<v1[low-1];
        }
        
    }
    return 0;
}