#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class S
{

    int x, y;

public:
    S(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }

    friend istream &operator>>(istream &, S &);
    friend ostream &operator<<(ostream &, S &);
};

istream &operator>>(istream &cin, S &a)
{
    cin >> a.x >> a.y;

    return cin;
}

ostream &operator<<(ostream &cout, S &a)
{
    cout << a.x << " " << a.y << "\n";

    return cout;
}
int main()
{
    S a, b, c;

    cin >> a >> b >> c;
    cout << a << b << c;

    return 0;
}