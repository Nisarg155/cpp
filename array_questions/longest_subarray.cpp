#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n],pd,maximum = 2,count;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        pd = arr[1] - arr[0];
        count = 2;
        for (int i = 1; i < n-1; i++)
        {
            if (arr[i+1 ] - arr[i] == pd)
            {
                count++;
            }
            else
            {
                pd = arr[i + 1] - arr[i];
                maximum = max(count,maximum);
                count = 2;
            }
        }
        
        cout<<maximum<<endl;
        
        

    }
    
return 0;
}