#include<bits/stdc++.h>
using namespace std;
void replace_pi(string str)
{
    if (str.length() == 0)
    {
        return;
    }

    if(str[0] == 'p' && str[1] == 'i')
    {
        cout<<3.14;
        replace_pi(str.substr(2));
    }
    else
    {
        cout<<str[0];
        replace_pi(str.substr(1));
    }
    
}
int main()
{
string str;
getline(cin,str);

replace_pi(str);
cout<<endl;
return 0;
}