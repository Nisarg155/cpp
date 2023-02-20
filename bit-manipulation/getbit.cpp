#include<bits/stdc++.h>
using namespace std;

int bit(int num,int position )
{
    return (num & (1<<position)) != 0;
}
int main()
{
    int num,position;
    cin>>num>>position;
    cout<<bit(num,position)<<endl;

return 0;
}