#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class temp{
    public:
    int x;

    temp(const int &x = 0)
    {
        this->x = x;
    }

};
int main()
{
    temp a = 10;
    a = 20;
    a = 30;
    cout<<a.x<<endl;


return 0;
}