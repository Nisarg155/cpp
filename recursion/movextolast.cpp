#include<bits/stdc++.h>
using namespace std;
string move_x_to_last(string str,char ch)
{
    if(str.length() == 0)
    return "";

    if(ch == str[0])
    return move_x_to_last(str.substr(1),ch) + str[0];
    
    return str[0] + move_x_to_last(str.substr(1),ch);


}
int main()
{
string str;
char ch;
cout<<"Enter the string :- ";
cin>>str;
cout<<"Enter the character to move at last :- ";
cin>>ch;
cout<<"The string is :- "<<move_x_to_last(str,ch)<<endl;
return 0;
}