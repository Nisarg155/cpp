#include<bits/stdc++.h>
using namespace std;
int main()
{
string str = "abc";
for (int i = 0; i< (1<<str.length()); i++)
{
    cout<<"{ ";
    for (int j = 0; j < str.length(); j++)
    {
        if( i & (1<<j) )
        cout<<str[j]<<" ";
    }
    cout<<" }"<<endl;
    
}

return 0;
}