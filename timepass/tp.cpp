#include<bits/stdc++.h>
using namespace std;
int main()
{
auto f = 3.14;
const int &r = f;
f = 4.14;
std::cout << f << " " << r;
}