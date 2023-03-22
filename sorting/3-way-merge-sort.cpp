#include<bits/stdc++.h>
using namespace std;
void m_ms2(int *&p,int low,int mid1,int mid2,int high)
{
    int *a1 = new int [mid2 - mid1 + 1];
    int *a2 = new int [high - low + 1 ];
    int s1 = mid2 - mid1,s2 = high -low;
    merge(p+low,p+mid1,p+mid1+1,p+mid2,a1);
    for (int i = 0; i <=s1; i++)
    {
        cout<<a1[i];
    }
    
    merge(a1,a1 + s1,p + mid2 +1 , p + high ,a2);

    for (int i = low, y = 0; i <= high ; y++,i++)
    {
        p[i] = a2[y];
    }
    
}
void ms3(int *&p,int low,int high)
{
    if(high - low <2)
    return;
    int mid1 = (high + low)/3;
    int mid2 = mid1 + ((high -mid1)/2) +1;
    ms3(p,low,mid1);
    ms3(p,mid1 +1,mid2);
    ms3(p,mid2 +1,high);

    m_ms2(p,low,mid1,mid2,high);

}
int main()
{
    int n;
    cin>>n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    ms3(p,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    
    

return 0;
}