#include <bits/stdc++.h>
using namespace std;
int q_sort(int *&p, int low, int high)
{
    int pivot = p[low];
    int i = low;
    int j = high;
    while (low < high)
    {
        while (p[i] <= pivot && i < high)
        {
            i++;
        }
        while (p[j] > pivot && j > low)
        {
            j--;
        }
        if (i < j)
            swap(p[i], p[j]);
    }
    swap(p[low], p[j]);
    return j;
}
void quicksort(int *&p, int low, int high)
{
    if (low < high)
    {
        int partition_index = q_sort(p, low, high);
        quicksort(p,low,partition_index-1);
        quicksort(p,partition_index+1,high);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int *p = new int[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    
    quicksort(p, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    
    
    return 0;
}