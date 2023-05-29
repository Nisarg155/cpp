#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n,min_n = INT_MAX;
	cin>>t;
	while(t--)
	{
        min_n = INT_MAX;
	    cin>>n;
	    int arr[n];
        vector <int> freq(101,0); 
	    for(int i = 0;i<n ;i++)
	    {
	        cin>>arr[i];
	        freq[arr[i]]++;
	        min_n = min(min_n,arr[i]);
	    }
	    cout<<n-freq[min_n]<<endl;
	}
	return 0;
}
