#include<bits/stdc++.h>
using namespace std;
void substr(string str,string ans)
{
    if(str.length() == 0)
    {   cout<<ans<<endl;
        return;
    }
    char ch = str[str.length() -1];
    str = str.erase(str.length() - 1,1);
    substr(str,ans);
    substr(str,ans + ch);
}
int main()
{
string str;
cin>>str;
substr(str,"");
return 0;
}