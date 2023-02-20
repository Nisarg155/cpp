#include<bits/stdc++.h>
using namespace std;
void substr_ascii(string str,string ans)
{
    if(str.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = str[str.length() - 1];
    int asc = ch;
     str = str.erase(str.length()-1,1);

    substr_ascii(str,ans);
    substr_ascii(str,ans + ch);    
    substr_ascii(str,ans + to_string(asc));    


}
int main()
{
string str;
cin>>str;

substr_ascii(str,"");
return 0;
}