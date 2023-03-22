#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;
void merge_sort(int *&p, int &begin, int &mid, int &end)
{
    int n1 =  mid - begin +1, n2 = end -mid;
    int n3 = n1 + n2;
    int arr1[n1],arr2[n2],arr3[n3];
    for (int i = begi)
    {
        /* code */
    }
    



}
void ms(int *&p, int begin, int end)
{
    if (begin >= end)
    {
        return;
    }
    int mid = (begin + end) / 2;
    ms(p, begin, mid);
    ms(p, mid + 1, end);

    merge_sort(p, begin, mid, end);
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int *p = new int[n];
    if (p == nullptr)
    {
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    ms(p, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    

    return 0;
}