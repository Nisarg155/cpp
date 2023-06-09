#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class basic{
    int x ;
    public:

    basic(int x)
    {
        this->x = x;
    }

    operator int()
    {
        return x;
    }
};
int main()
{
    basic a(10);

    int i =a;

    cout<<i<<endl;


return 0;
}