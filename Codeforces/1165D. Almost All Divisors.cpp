#include<bits/stdc++.h>
using namespace std;
long long int ar[500];
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int i, t, n, ans, j, nw, f = 0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar+n);
        j = n-1;
        ans = ar[0]*ar[j];
        j--;
        for(i = 1; i <= n/2; i++)
        {
            nw = ar[i]*ar[j];
            j--;
            //cout << nw << endl;
            if(ans != nw && !f)
            {
                f = 1;
            }
        }
        long long int sq = sqrt(ans);
        int divcnt = 0;
        for(i = 2; i <= sq; i++)
        {
            if(!(ans%i))
                divcnt += 2;
        }
        if(sq*sq == ans)
            divcnt--;
        //cout << divcnt << endl;
        if(!f && divcnt == n)
            cout << ans << endl;
        else
            cout << -1 << endl;
        for(i = 0; i < 400; i++)
            ar[i] = 0;
        f = 0;
    }
}
