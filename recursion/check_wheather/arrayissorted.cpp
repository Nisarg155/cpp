#include<bits/stdc++.h>
using namespace std;
bool check_sorted(int arr[],int len)
{
    if(len == 1 )
    return true;
    
    
    bool check = check_sorted(arr + 1,--len);
    return check && (arr[0]>arr[1]);
}

int main()
{
int len;
cin>>len;
int arr[len];
for (int i = 0; i < len; i++)
{
    cin>>arr[i];
}

cout<<check_sorted(arr,len);

return 0;
}