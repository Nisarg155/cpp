#include<bits/stdc++.h>
using namespace std;
int first_occ(int arr[] , int key , int len,int i)
{
    if(len == 0)
    return -1;
    if(*arr == key)
    return i;

    return first_occ(arr +1,key,--len,++i);
}
int last_occ(int arr[],int key,int len,int i)
{
    if(len == 0)
    return -1;

    if(arr[i] == key)
    return i;

    return last_occ(arr,key,--len,--i);
}
int main()
{
int len;
cout<<"enter length of array :- ";
cin>>len;
int arr[len];

for (int i = 0; i < len; i++)
{
    cout<<"Ele no "<<i+1<<" ";
    cin>>arr[i];
}
int key;
cout<<"Enter the number to search :- ";
cin>>key;
cout<<"first occurance at index :- "<<first_occ(arr,key,len,0)<<endl;
cout<<"Last occurance at index :- "<<last_occ(arr,key,len,len-1)<<endl;


return 0;
}