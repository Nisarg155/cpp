    #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[10000],sum = 1 ;
	for(int i = 2;i<=10000;i++ )
    {
        sum += i;
        arr[i-2] = sum; 
    }
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if(arr[n-2]%n == 0)
        cout<<"-1"<<endl;
        else
        {
            for(int i = 1;i<=n;i++)
            {
                
            }
        }
    }
    
	return 0;
}
