#include<bits/stdc++.h>
using namespace std;
int ar[1000];
int main()
{
    int i, c1 = 0, cne = 0, mx = -9, n, k, re1, rene, j;
    cin >> n >> k;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] == 1)
            c1++;
        else
            cne++;
    }
    for(i = 0; i < n; i++)
    {
        re1 = c1;
        rene = cne;
        for(j = i; j < n; j += k)
        {
            if(ar[j] == 1)
                re1--;
            else
                rene--;
        }
        j = i-k;
        //cout << j << " ";
        if(j >= 0)
        {
            for(;j >= 0; j -= k)
            {
                if(ar[j] == 1)
                    re1--;
                else
                    rene--;
            }
        }
        mx = max(mx, abs(re1-rene));
        //cout << mx << endl;
    }
    cout << mx;
}
