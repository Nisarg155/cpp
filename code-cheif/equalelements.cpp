#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n,t,x,max_freq = 0;
    cin>>t;
    while (t--)
    {
        
        cin>>n;
        int arr[n +1 ] = {0}; 
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            arr[x]++;
        }
        for (int i = 0; i < n+1; i++)
        {
            max_freq = max(max_freq,arr[i]);
        }
        cout<<n-max_freq<<endl;  
    }
    

	return 0;
}
