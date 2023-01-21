#include<iostream>
int binarysearch(int a[],int n ,int key)
{
    int start = 0,end = n ,mid;
    while (start <=end)
    {
        mid = (start + end)/2;
        if (a[mid] == key)
        return mid;

        else if(a[mid]>key)
            end = mid -1;
        else 
        start = mid + 1;
    }
    
}
using namespace std;
int main()
{
    int n,key;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    cin>>a[i];
    cin>>key;

    cout<< binarysearch(a,n,key);
    
}