#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef struct
{
    int r_no;
    int marks;
    char dept[3];
} student;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int ec_max = 0, ce_max = 0, it_max = 0, total_max = 0;
    student *p = new student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> (p + i)->r_no >> (p + i)->marks >> (p + i)->dept;
        if (strcmp((p+i)->dept,"CE") == 0)
        {
            ce_max = max(ce_max, (p + i)->marks);
        }
        else if (strcmp((p+i)->dept,"EC") == 0)
        {
            ec_max = max(ec_max, (p + i)->marks);
        }
        else
        {
            it_max = max((p + i)->marks, it_max);
        }
    }

    total_max = max(it_max, ce_max);
    total_max = max(total_max, ec_max);
    cout << total_max << endl;
    cout << ce_max << " "<< "CE" << endl;
    cout << ec_max << " "<< "EC" << endl;
    cout << it_max << " "<< "IT" << endl;

    return 0;
}
