#include<bits/stdc++.h>
using namespace std;
char ar[505][505];
int main()
{
    ios_base :: sync_with_stdio(false);
    int i, j, n, cnt = 0;
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
            if(ar[i-1][j-1] == 'X' && ar[i-1][j+1] == 'X' && ar[i+1][j-1] == 'X' && ar[i+1][j+1] == 'X' && ar[i][j] == 'X')
                cnt++;
        }
    }
    cout << cnt << endl;
}
