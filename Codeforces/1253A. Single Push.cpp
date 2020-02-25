#include<bits/stdc++.h>
using namespace std;
int a[100005], b[100005], dif[100005];
int main()
{
    int t, n, i, j;
    cin >> t;
    while(t--)
    {
        for(i = 0; i < 100005; i++)
        {
            dif[i] = 0;
        }
        cin >> n;
        int f = 1, cnt = 0, d;
        for(i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for(i = 1; i <= n; i++)
        {
            cin >> b[i];
            if(b[i]-a[i] < 0)
                f = 0;
            dif[i] = b[i]-a[i];
            if(dif[i] == 0)
                cnt++;
            else
                d = dif[i];
        }
        if(n == 1)
        {
            if(a[1] <= b[1])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        int c = 0;
        int shuru = 0, shesh = 0;
        for(i = 1; i <= n; i++)
        {
            if(dif[i] && !shuru)
            {
                shuru = i;
            }
            //cout << "i+1 " << dif[i+1] << endl;
            if(shuru != 0 && dif[i+1] == 0)
            {
                shesh = i;
                break;
            }
        }
        //cout << shuru << " " << shesh << endl;
        for(i = shuru; i <= shesh; i++)
        {
            if(d == dif[i])
                c++;
        }
        if(cnt == n-c && f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
