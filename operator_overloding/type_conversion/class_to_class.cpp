#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class B;
class A{
    public:

    int x;

    A(int x = 0)
    {
        this->x = x;
    }

    operator B() ;
};

class B{
    public:
    int x;
    
    B(int x = 0)
    {
        this->x = x;
    }


    operator A()
    {
        return A(x);
    }

};

A::operator B()
{
    return B(x);
}
int main()
{
    A a(10);
    B b(20);

    b = a;
    b = 90;
    a = b;

    a = 95;

    cout<<b.x<<endl;
    cout<<a.x<<endl;
    return 0;
}