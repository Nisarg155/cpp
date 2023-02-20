#include<bits/stdc++.h>
using namespace std;
bool powerof2(int num)
{
    return    num && (!(num & (num - 1)));
}
int main()
{
int number;
cin>>number;
if(powerof2(number))
cout<<"power of 2"<<endl;
else
cout<<"not power of 2"<<endl;

return 0;
}