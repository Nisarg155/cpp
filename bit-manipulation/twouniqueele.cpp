#include <bits/stdc++.h>
using namespace std;
int setbit(int num, int pos) // todo find two unique element present in array
{
    return num & (1 << pos);
}
int main()
{
    int len, position;
    cout << "Enter length of array : ";
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    int xorsum = 0, num1, num2;
    for (int i = 0; i < len; i++) //! it will find out xor of all elements of array
    {
        xorsum = xorsum ^ arr[i];
    }
    for (int i = 0; 1; i++) //! it will find out the 1 in reghtmost binary representation of xorsum
    {
        if ((xorsum >> i) & 1)
        {
            position = i;
            break;
        }
    }
    num1 = xorsum;
    for (int i = 0; i < len; i++) //! it will xor all those elements which has 1 present in position
    {
        if (setbit(arr[i], position))
        {
            num1 = num1 ^ arr[i];
        }
    }
    num2 = num1 ^ xorsum; //! to find second number from first number

    cout << "Number 1 :- " << num1 << endl;
    cout << "Number 2 :- " << num2 << endl;

    return 0;
}