#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class basic{
    int x ;

    public:

    basic(int x = 0)
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
    basic b(10);
    int c = b;
    cout<<c<<endl;
return 0;
}