#include<bits/stdc++.h>
using namespace std;
char ar[60][60];
int main()
{
    int n, i, j, mark = 0, flag = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> ar[i][j];
        }
    }
    for(i = 1; i < n-1; i++)
    {
        for(j = 1; j < n-1; j++)
        {
            if(ar[i][j] == '.' && ar[i][j-1] == '.' && ar[i][j+1] == '.')
            {
                if(ar[i-1][j] == '.' && ar[i+1][j] == '.')
                {
                    ar[i][j] = '1'; ar[i][j-1] = '1';
                    ar[i][j+1] = '1';
                    ar[i-1][j] = '1', ar[i+1][j] = '1';
                    //flag = 0;
                    continue;
                }
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            //cout << ar[i][j];
            if(ar[i][j] == '.')
                flag = 1;
        }
        //cout << endl;
    }
    if(flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
