#include<bits/stdc++.h>
using namespace std;
long long int ar[100005];
int main()
{
    ios_base :: sync_with_stdio(false);
    double ans;
    long long int n, k, m, i, rem, re;
    cin >> n >> k >> m;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    if(n <= m)
    {
        if(m-n < 2)
            re = m-n+1;
        else
            re = m-n;
        re = min(re, k);
        rem = ar[n-1];
        ans = rem+re;
        printf("%.20lf\n", ans);
    }
    else
    {
        rem = 0;
        int cnt = 0;
        for(i = m; i < n; i++)
        {
            //cout << ar[i] << " ";
            rem += ar[i];
            cnt++;
        }
        //cout << rem << endl;
        ans = (double)rem/(double)cnt;
        printf("%.20lflk\n", ans);
    }
}
