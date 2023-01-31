#include<bits/stdc++.h>
using namespace std;
int main()
{
int n , sum = 0 ,q;
cin>>n;
sum = 15;
q = n;
while (q)
{
    q = q/3;
    sum += q;
}
cout<<sum+1;



return 0;
}