#include<bits/stdc++.h>
using namespace std;
string removedupli(string str)
{
    if(str.length() == 0)
    return "";
    
    string sub = removedupli(str.substr(1));
    if(sub[0] == str[0])
    return sub;

    return str[0] + sub;
}
int main()
{
string str;
cin>>str;
cout<<removedupli(str)<<endl;
return 0;
}