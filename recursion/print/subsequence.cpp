#include<iostream>
#include<vector>
using namespace std;
void print(int n,int arr[],int i,vector <int> &v)
{
    if(i== n)
    {
        if(v.size() == 0)
        cout<<"{}";
        for(auto x : v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[i]);
    print(n,arr,i+1,v);
    v.pop_back();
    print(n,arr,i+1,v);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector <int> v;
    print(n,arr,0, v);
    
    return 0;

}