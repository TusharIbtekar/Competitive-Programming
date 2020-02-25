#include<bits/stdc++.h>
using namespace std;
int r[50004], c[50004];
int main()
{
    int i, j, n, m, t;
    cin >> t;
    while(t--)
    {
        memset(c, 0, sizeof(c));
        memset(r, 0, sizeof(r));
        scanf("%d %d ", &n, &m);
        char s[n+1][m+1];
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                cin >> s[i][j];
                if(s[i][j] == '*')
                {
                    r[i]++;
                    c[j]++;
                }
            }
        }
        /*for(i = 0; i < 5; i++)
            cout << r[i] << " " << c[i] << endl;*/
        int rmn = -1, cmn = -1, ans = 99999999;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                int temp = n-r[i]+m-c[j];
                if(s[i][j] == '.')
                    temp--;
                ans = min(temp, ans);
            }
        }
        cout << ans << endl;
    }

}
