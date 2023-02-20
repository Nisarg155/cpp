#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int len1, len2, count = 0;
        cin >> len1 >> len2;
        string str1, str2;
        cin >> str1 >> str2;

        string str3 = str1 +str2;
        int i_xor = 0;

        for (int i = 0; i < len1 +len2; i++)
        {
            i_xor = i_xor^(int)(str3[i] - 'a');
        }
        cout<<i_xor<<endl;
        
    }
    return 0;
}
