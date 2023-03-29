#include<bits/stdc++.h>
using namespace std;
void subseq(int *&arr,int i,int n,vector <int> &res,int sum,int vsum)
{
    if(i == n)
    {
        if(sum == vsum) //? if sum is equal then print the sumseq and return 
        {
            for (int i = 0; i < res.size(); i++)
            {
                cout<<res[i]<<" ";
            }
            cout<<endl;
            return;
        } 
        //? if sum is not equal then just return 
        return;
    }

    //? one element is insert and function is called again
    res.push_back(arr[i]);
    vsum += arr[i];
    subseq(arr,i+1,n,res,sum,vsum);

    //? one element is removed and  function is called again 
    res.pop_back();
    vsum -= arr[i];
    subseq(arr,i+1,n,res,sum,vsum);


}
int main()
{
    int n,sum;
    cout<<"Enter number of ele :- ";
    cin>>n;
    int *arr = new int[n];
    vector <int> res;
    for (int i = 0; i < n; i++)
    {
        printf("Enter ele no %d :- ",i+1);
        cin>>arr[i];
    }
    cout<<" Enter the sun to find subseq :- ";
    cin>>sum;
    subseq(arr,0,n,res,sum,0);
    
return 0;
}