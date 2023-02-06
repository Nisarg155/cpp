#include<bits/stdc++.h>
using namespace std;

// todo find unique element in an array of triplet 


int main()
{
int len,xorsum,uniq_num=0,bits[32] = {0};  // ?the size of array depends on your size of int in bits
cout<<"Enter lenght of array :- ";
cin>>len;
int arr[len];
for (int i = 0; i < len; i++)
{
    cout<<"Enter element "<< i+1<<":- ";
    cin>>arr[i];
}

for (int i = 0; i < 32; i++)  // ? it will count the set bits of all element of arr and arrange it in bit
{
    for (int j = 0; j < len; j++)
    {
        if (arr[j] & (1 << i))
        {
            bits[i]++;
        }
    }
}
for (int i = 0; i < 32; i++) // ? it will give us binary of the unique number and also convert it into decimal
{
    bits[i] %= 3;
    uniq_num += bits[i]*pow(2,i);
}
cout<<uniq_num<<endl;
return 0;
}