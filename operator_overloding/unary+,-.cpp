#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class ADDITION{

    public:

    int x = 10;
    void operator - ()
    {
        x = -x;
    }
};

class BINARY{
    int x;
    public:

    BINARY(int x)
    {
        this->x = x;
    }

    
};
int main()
{
    ADDITION a;
    -a;
    cout<<a.x;
    BINARY
return 0;
}