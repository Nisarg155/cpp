#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,max_num = 0;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    max_num = max(max_num,arr[i]);
}
int freq[max_num +1] = {0};

for (int i = 0; i < n; i++)
{
    if(freq[arr[i]] <2)
    {
        freq[arr[i]]++;
    }
    else
    {
        cout<<i;
        break;
    }

}



return 0;
}