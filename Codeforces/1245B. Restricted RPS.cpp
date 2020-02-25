#include<bits/stdc++.h>
using namespace std;
char sn[105];
int main()
{
    int a, b, c, n, t, i;
    string s;
    cin >> t;
    while(t--)
    {
        int tot = 0;
        cin >> n;
        cin >> a >> b >> c;
        cin >> s;
        for(i = 0; i < 101; i++)
            sn[i] = '1';
        for(i = 0; i < n; i++)
        {
            if(s[i] == 'R' && b)
            {
                b--;
                tot++;
                sn[i] = 'P';
            }
            else if(s[i] == 'P' && c)
            {
                c--;
                tot++;
                sn[i] = 'S';
            }
            else if(s[i] == 'S' && a)
            {
                a--;
                tot++;
                sn[i] = 'R';
            }
        }
    for(i = 0; i < n; i++)
    {
        if(sn[i] == '1')
        {
            if(a)
            {
                a--;
                sn[i] = 'R';
            }
            else if(b)
            {
                b--;
                sn[i] = 'P';
            }
            else
            {
                c--;
                sn[i] = 'S';
            }
        }
    }
        //cout << tot << endl;
        if(tot >= ceil(n/2.0))
        {
            cout << "YES" << endl;
            for(i = 0; i < n; i++)
                cout << sn[i];
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
}
