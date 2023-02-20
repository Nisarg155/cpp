#include<bits/stdc++.h>
using namespace std;
bool issafe(int **arr,int x,int y,int n)
{
    if(arr[x][y] != 0 && x< n && y <n )
    return true;

    else
    return false;
}
bool ratinmaze(int n,int (*arr)[],int *solution,int x,int y)
{
    if (x == n- 1 && y == n-1 && arr[x][y] == 1)
    {
        
    }
    
}

int main()
{
int n;
cin>>n;

int arr[n][n],solutio[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        arr[i][j];
        solutio[i][j] = 0;
    }   
}
ratinmaze(n,arr,solution,0,0,);

return 0;
}