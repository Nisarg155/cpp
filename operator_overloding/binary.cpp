#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class C;
class B;
class A;
C operator + (B&,A&);
C operator + (A&,B&);
class A{
    int x;
    public:
    A(int x = 0)
    {
        this->x = x;
    }

    friend C operator +(B&, A&);
    friend C operator +(A&, B&);
};

class B{

    int y;
    public:

    B(int y = 0)
    {
        this->y = y;
    }

    friend C operator + (B&, A&);
    friend C operator + (A&, B&);
};



class C{

    public:
    int d ;
    C(int d = 0)
    {
        this->d = d;
    }

    friend C operator + (B&, A&);
};

 C operator + (B &b , A &a)
{
    return C(b.y + a.x);
}

C operator + (A& a,B &b)
{
    return C(a.x + b.y);
}


int main()
{


    A a(10);
    B b(20);

    C c = b+a;
    C d = a+b;

    cout<<c.d<<endl;



return 0;
}