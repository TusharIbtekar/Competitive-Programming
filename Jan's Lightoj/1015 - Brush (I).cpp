#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tot = 0, t, i, d;
    cin >> t;
    for(i = 1; i <= t; i++)
    {
        tot = 0;
        cin >> n;
        while(n--)
        {
            cin >> d;
            if(d > 0)
                tot += d;
        }
        printf("Case %d: %d\n", i, tot);
    }
}
