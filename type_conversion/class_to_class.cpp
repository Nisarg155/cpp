#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class source{

    public:
    int x;

    source(int x = 0)
    {
        this->x = x;
    }

    // operator desti(){
    //     return desti()
    // }
};

class desti{ 
    int y;

    public:

    desti(const source& obj)
    {
        y =  obj.x;
    }
};
int main()
{



return 0;
}