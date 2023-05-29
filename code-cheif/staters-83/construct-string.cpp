#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cin.ignore();
        string s, substr;
        cin >> s;
        int index;
        char alpha;
        string c;

        for (int i = 0; i < 26; i++)
        {
            substr.clear();
            alpha = 97 + i;
            for (int j = 0; j < 3; j++)
            {
                substr += alpha;
            }
            while (1)
            {
                index = s.find(substr);
                if(index != -1)
                {
                    c = (97 + i);
                    s.erase(index+1,2);
                }
                else{
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
