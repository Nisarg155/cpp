#include <vector>
#include <iostream>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, a;
    cin >> n;
    vector<long int> v1(n, 0), v2;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v1[i] = a;
    }
    while (cin >> a)
    {
        v2.push_back(a);
    }
    int x, size = v2.size();
    int low = 0, high = n - 1, mid, flag = 0, y, z, min_val = 0,w;
    for (int i = 0; i < size; i++)
    {
        x = v1[i];
        low = 0;
        high = n - 1;
        while (low <= high)
        {
            mid = (high + low) / 2;
            flag = 0;

            if (v2[mid] == x)
            {
                cout << v2[mid] << " ";
                flag = 1;
                break;
            }
            else if (v2[mid] > x)
            {
                high = mid - 1;
            }
            else if (v2[mid] < x)
            {
                low = mid + 1;
            }
        }

    }

    return 0;
}