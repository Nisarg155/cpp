#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
getline(cin,str);
int freq[26] = {0};
for (int i = 0; i < str.length(); i++)
    freq[str[i] - 'a']++;

return 0;
}