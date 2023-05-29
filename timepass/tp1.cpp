#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int m,n,i;
	    cin>>m>>n;
	    if(m<n) cout<<"NO\n";
	    else if(m==n) cout<<"YES\n";
	    else if(m&1) cout<<"NO\n";
	    else
	    {
	        bool ans=false;
	        int r=m, mid;
	        while(n>0)
	        {
	            if(r&1) break;
	            mid=r/2;
	            if(mid==n)
	            {
	                ans=true;
	                break;
	            }
	            else if(mid<n)
	            {
	                r=mid;
	                n-=mid;
	            }
	            else
	            {
	                r=mid;
	            }
	        }
	        if(ans) cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	}
	return 0;
}
