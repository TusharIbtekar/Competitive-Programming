#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c[30];
    long long int n, t, cnt = 0, i, k, j, f = 0, ans = 0;
    cin >> n >> k;
    cin >> s;
    for(i = 0; i < k; i++)
        cin >> c[i];
    for(i = 0; i < k; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(s[j] == c[i])
                s[j] = '*';
        }
    }
    for(i = 0; i < n; i++)
    {
        if(!f && s[i] == '*')
        {
            f = 1;
            //cnt++;
            //cout << i << endl;
        }
        if(f && s[i] != '*')
        {
            //cout << cnt << endl;
            f = 0;
            ans += cnt*(cnt+1)/2;
            cnt = 0;
        }
        if(f && s[i] == '*')
            cnt++;
    }
    if(cnt)
        ans += cnt*(cnt+1)/2;
    cout << ans << endl;
}
