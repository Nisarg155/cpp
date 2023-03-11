#include <bits/stdc++.h>
using namespace std;
long int N = 10;
int main()
{
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,count = 0,step ;
        cin>>x>>y;
        for(;x<=y;)
        {
            if(x%2 == 0)
            {
                step = (y-x)/2;
                count += step;
                x +=  step*2;
            }
            else if(x %3 == 0){
            x += 3;
            count++;
            }
            else if( x% 5 ==0){
            x += 5;
            count++;
            }
            else if( x% 7 == 0)
            {
            x+= 7;
            count++;
            }
        }
        cout<<x<<" " <<count<<endl;
        
    }
    
    return 0;
}
