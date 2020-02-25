#include<bits/stdc++.h>
using namespace std;
int cnt[10005];
int main()
{
    std :: ios_base :: sync_with_stdio(false);
    int n, ma = 0, i, tot = 0, mx = 0, pos = 0, m;
    cin >> n;
    int ar[n+1];
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(m = 0; m < n; m++)
    {
        mx = ar[m];
        ma = ar[m];
        for(i = m; i < n; i++)
        {
            if(mx >= ar[i])
            {
                tot++;
                mx = ar[i];
                //cout << ar[i] << " ";
                if(i == n-1)
                    cnt[pos] = tot;
            }
            else
            {
                break;
            }
        }
        for(i = m; i >= 0; i--)
        {
            if(ma >= ar[i])
            {
                tot++;
                ma = ar[i];
                //cout << ar[i] << " ";
                if(i == 0)
                    cnt[pos] = tot;
            }
            else
            {
                break;
            }
        }
        cnt[pos] = tot-1;
        pos++;
        tot = 0;
    }
    //for(i = 0; i < n; i++)
        //cout << cnt[i] << endl;
    sort(cnt, cnt+10005, greater<int>());
    cout << cnt[0] << endl;
}
