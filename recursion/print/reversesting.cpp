#include<bits/stdc++.h>
using namespace std;
void reverse_string(string str)
{
    if(str.length() == 0)
    return;

    reverse_string(str.substr(1));
    cout<<str[0];

}
int main()
{
string str;
getline(cin,str);

reverse_string(str);
cout<<endl;
return 0;
}