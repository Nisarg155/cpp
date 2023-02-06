#include<bits/stdc++.h>
using namespace std;

int no_of_1(int n)
{
    int count  = 0;
    while(n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}
int main()
{
int num ;
cin>>num;
cout<<no_of_1(num)<<endl;
return 0;
}