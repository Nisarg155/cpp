#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class temp
{

public:
    int x;
    temp(int x)
    {
        this->x = x;
    }

    temp operator++()
    {
        return temp(++x);
    }

    temp operator ++(int)
    {
        return temp(x++);
    }
};
int main()
{
    temp a(10);
    cout<<a.x<<" ";
    temp b = ++a;
    temp c = a++;
    cout<<b.x<<" "<<c.x<<" "<<a.x<<"\n";

    return 0;
}