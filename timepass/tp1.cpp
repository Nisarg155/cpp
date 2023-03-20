#include<bits/stdc++.h>
using namespace std;
bool compare(const char *a, const char *b)
{
    return strcasecmp(a,b) < 0;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(); // Skip the newline character left in the input buffer

    // Allocate an array of pointers to char
    char **names = new char *[n];

    // Allocate memory for each name and read it from input
    for (int i = 0; i < n; i++)
    {
        char *name = new char[2001]; // Maximum length of a name is 2000
        cin.getline(name, 2001);     // Read the name, including any spaces
        names[i] = name;             // Store the pointer to the name in the array
    }

    sort(names, names + n, compare);
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }

    // Free the memory allocated for each name
    for (int i = 0; i < n; i++)
    {
        delete[] names[i];
    }

    // Free the memory allocated for the array of pointers
    delete[] names;

    return 0;
}
