#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n == 0)
    return;
    print(--n);   
    cout<<n;
}


int main()
{
int num;
cin>>num;
print(num);
return 0;
}