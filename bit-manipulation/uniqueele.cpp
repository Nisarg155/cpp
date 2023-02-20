#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len, xorsum = 0;
    cin >> len;
    int arr[len];

for (int i = 0; i < len; i++)
    cin >> arr[i];

    for (int i = 0; i < len; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    cout << xorsum << endl;

    return 0;
}