#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[105][105];
    int b[105][105];
    int n, m, i, j, flag = 0;
    cin >> n >> m;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            a[i][j] = 1;
            cin >> b[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(!b[i][j])
            {
                for(int k = 0; k < m; k++)
                {
                    a[i][k] = 0;
                }
                for(int k = 0; k < n; k++)
                {
                    a[k][j] = 0;
                }
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(!b[i][j])
            {
                for(int k = 0; k < n; k++)
                {
                    if(a[i][k])
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                for(int k = 0; k < m; k++)
                {
                    if(a[k][j])
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                }
            }
            else
            {
                for(int k = 0; k < n; k++)
                {
                    if(a[i][k])
                    {
                        flag = 1;
                        continue;
                    }
                }
                for(int k = 0; k < m; k++)
                {
                    if(a[k][j])
                    {
                        flag = 1;
                        continue;
                    }
                }
                if(!flag)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                flag = 0;
            }

        }
    }
    cout << "YES" << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
