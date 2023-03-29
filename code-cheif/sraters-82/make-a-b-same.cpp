#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, flag = 0;
    cin >> t;
    int n;
    while (t--)
    {
        flag = 0;
        int sum_a = 0;
        int sum_b = 0;
        cin >> n;
        int *a = new int[n];
        int *b = new int[n];
        for (int i = 0; i <n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

        }
        for (int i = n-1,y = 0; i>= 0;y++, i--)
        {
            sum_a = sum_a + a[i]*pow(2,y);
            sum_b = sum_b + b[i]*pow(2,y);
        }
        if((sum_a <= sum_b) && (sum_a != 0))
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}