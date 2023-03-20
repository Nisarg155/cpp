#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void ms_merge(int *&p, int low, int mid, int high)
{
    int *arr3 = new int [high - low + 1];
    int i = low, j = mid + 1, k = 0;
    while ((i <= mid) && (j <= high))
    {
        if (p[i] < p[j])
        {
            arr3[k++] = p[i++];
        }
        else
        {
            arr3[k++] = p[j++];
        }
    }
    while (i <= mid)
    {
        arr3[k++] = p[i++];
    }
    while (j <= high)
    {
        arr3[k++] = p[j++];
    }
    for (int i = low, y = 0; i <= high; y++, i++)
    {
        p[i] = arr3[y];
    }
    delete(arr3);
}

void ms(int *&p, int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;
    ms(p, low, mid);
    ms(p, mid + 1, high);

    ms_merge(p, low, mid, high);
}
int main()
{
    int n;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    ms(p, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}