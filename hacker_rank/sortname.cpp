#include <bits/stdc++.h>
using namespace std;
void sort(string ** &name,int n)
{
    
    string tmp;
    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; i < n-i-1; i++)
        {
            if(strcasecmp(name[j]->c_str(),name[j+1]->c_str()) < 0)
            {
                tmp = *name[j];
                *name[j] = *name[j+1];
                *name[j+1] = tmp;
            }
        }
        
    }
}
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string **name = new string *[n];
    for (int i = 0; i < n; i++)
    {
        name[i] = new string;
        getline(cin, *name[i]);
    }
    sort(name,n);
    cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<*name[i]<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete(name[i]);
    }

    delete(name);
    
    

    return 0;
}