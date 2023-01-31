#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    int arr[n],maximum = 0,count = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(arr[0] > arr[1])
    count = 1;
    maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>maximum && arr[i]>arr[i + 1 ])
        {count++;
        }
        maximum = max(arr[i],maximum);
    }
    if( arr[n-1]>maximum)
    count++;

    cout<<count<<endl;
}

return 0;
}