#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class unary{

    public:
    int x = 10;

    unary(int x = 0)
    {
        this->x = x;
    }

    unary operator -()
    {
        x = -x;
        return *this;
    }
};


class unary2;
unary2 operator -(unary2&);

class unary2
{
    public:

    int x ;

    unary2(int x = 0)
    {
        this->x = x;
    }

    friend unary2 operator -(unary2 &);
};

unary2 operator -(unary2 &u)
{
    return unary2(-u.x);
}


int main()
{
    unary a(10);

    a = -a;

    cout<<a.x<<endl;

    unary2 u(50);

    u = -u;
    cout<<u.x<<endl;




return 0;
}