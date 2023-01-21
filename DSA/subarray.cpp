#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ,sub_arr;
cin>>n;
sub_arr = (n*(n+1))/2;
int a[n] ,sum = 0,x = 0 , b[sub_arr];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
cout<<endl;

for (int i = 0; i < n; i++)
{
    sum = 0;
    for (int j = i; j<n ; j++)
    {
        sum = sum + a[j];
        cout<<sum<<"\t";
        b[x++] = sum;
    }
    cout<<endl;
}
sum = 0;
for (int i = 0; i < sub_arr; i++)
{
    sum += b[i];
}
cout<< sum;


return 0;
}