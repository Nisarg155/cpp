#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, h, x, y, count = 0;
    cin>>t;
    while (t--)
    {
        cin >> h >> x >> y;
        count = 0;
        int flag = 0;
        while (h > 0)
        {
            if (flag == 0)
            {
                h -= y;
                count++;
                flag = 1;
            }
            else if(flag)
            {
                h -= x;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
