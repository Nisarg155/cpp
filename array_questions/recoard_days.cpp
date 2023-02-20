#include<bits/stdc++.h>
using namespace std;
void record_breaking_day(int arr[],int rec,int max_visitor,int n)
{
    if(n == 0)
    cout<<rec;

    if(arr[0] > arr[1] && arr[0]>max_visitor )
    {
        max_visitor = arr[0];
        rec++;
    }

    record_breaking_day(arr+1,rec,max_visitor,n-1);
}
int main()
{
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int rec = 0,max_visitor = 0;
if(arr[0] >arr[1])
{
    rec = 1;
    max_visitor = arr[0];
}
record_breaking_day(arr+1,rec,max_visitor,n-1);


return 0;
}