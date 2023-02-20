#include<bits/stdc++.h>
using namespace std;
void tower_of_hanoi(char base,char helper,char destination,int n)
{
    if(n == 0)
    return;

    tower_of_hanoi(base,destination,helper,n-1);
    cout<<base<<" to "<<destination<<endl;
    tower_of_hanoi(helper,base,destination,n-1);
}
int main()
{
int num = 2;
cin>>num;
char base = 'a',helper = 'b',destination = 'c';
tower_of_hanoi(base,helper,destination,num);
return 0;
}