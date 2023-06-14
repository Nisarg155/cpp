#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class base{
    int x = 0;
    public:

    virtual string  fun( const string &x)
    {
        return string("string received base");
    }

    virtual string fun(int x) = 0;
};

class derived :public base
{
    int y = 0;

    public:

    string fun( const string &x)
    {
        return string("string received derived");
    }

    string cast()
    {
        return string("casting function");
    }

    string fun(int x)
    {
        return string("pure virtual function");
    }
};
int main()
{

    base * b = new derived;

    cout<<b->fun("hello this is my code")<<endl;
    cout<<((derived *)b)->cast()<<endl;
    cout<<b->fun(2)<<endl;
return 0;
}