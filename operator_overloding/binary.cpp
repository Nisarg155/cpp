#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class binary{

    public:
    int x;

    binary(int x = 0)
    {
        this->x = x;
    }


    // binary operator + (binary &obj)
    // {
    //     return binary(x + obj.x);
    // }


    friend binary operator +(binary &,binary &);
};


binary operator +(binary &a,binary &b)
{
    return binary(a.x + b.x);
}

int main()
{
    binary a(10),b(20), c;
    c = a+b;

    cout<<c.x<<"\n";

return 0;
}