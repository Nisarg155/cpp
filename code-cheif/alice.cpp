#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n, unhappy = 0;
    cin >> t;
    while (t--)
    {
        unhappy =0;
        cin >> n;
        int alice[n], bob[n];
        for (int i = 0; i < n; i++)
        {
            cin >> alice[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>bob[i];
            if (alice[i]>2*bob[i])
            {
                unhappy++;
            }
            else if(bob[i]>2*alice[i])
            {
                unhappy++;
            }
            
        }
        cout<<n-unhappy<<endl;
        
        
        
    }
    return 0;
}
