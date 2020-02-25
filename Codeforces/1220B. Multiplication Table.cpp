#include<bits/stdc++.h>
using namespace std;
int ar[1005], m[1005][1005];
int main()
{
    int i, j, mn = 99999, n, flag = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cin >> m[i][j];
    }
    for(i = 0; i < n; i++)
    {
        mn = 99999;
        for(j = 0; j < n; j++)
        {
            if(m[i][j]!= 0)
                mn = min(m[i][j], mn);
        }
        ar[i] = mn;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(m[i][j]%ar[i])
            {
                ar[i] = 1;
                //cout << i << " " << j << endl;
                break;
            }
        }
    }
    //cout << "1" << endl;
    for(i = 0; i < n; i++)
        cout << ar[i] <<  " ";
}
