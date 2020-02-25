#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101][101];
    int n, i, j, ans = 0, cnt = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(s[i][j] == 'C')
            {
                cnt++;
            }
        }
        ans += cnt*(cnt-1)/2;
        cnt = 0;
    }
    cnt = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(s[j][i] == 'C')
            {
                cnt++;
            }
        }
        ans += cnt*(cnt-1)/2;
        cnt = 0;
    }
    cout << ans << endl;
}
