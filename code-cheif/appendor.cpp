#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, y;
        cin >> n >> y;
        int o = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            o |= x;
        }
        cout<<((o^y)| y);
      
    }

    return 0;
}