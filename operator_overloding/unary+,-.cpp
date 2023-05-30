#include<bits/stdc++.h>
#include<iostream>


class unary{

    friend unary operator -(unary &);

    public:
    int x;

    unary(int x = 0)
    {
        this->x = x;
    }


    //! class overloding

    // unary operator -()
    // {
    //     return unary(-x);
    // }

};

    unary operator -(unary &a)
    {
        return unary(-a.x);
    }
using namespace std;
int main()
{
    unary a(10);

    a = -a;
    cout<<a.x<<"\n";
return 0;
}