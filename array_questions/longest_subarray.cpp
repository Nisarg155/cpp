#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;

int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int *p = (arr+1);
int max_leng = 0,diff = arr[1]-arr[0] ,count = 2;
n = n-1;
while (n)
{
    if (p[1] - p[0] != diff)
    {
        diff = p[1] - p[0];
        count = 2;
    }
    else
        count++;

    max_leng = max(max_leng,count);
    p++;
    --n;
}
printf("%d",max_leng);

return 0;
}