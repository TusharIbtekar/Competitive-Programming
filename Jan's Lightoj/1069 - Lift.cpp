#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, cost = 0;
    scanf("%lld", &t);
    for(int j = 0; j < t; j++)
    {
        long long per, lif;
        scanf("%lld %lld", &per, &lif);
        if(per <= lif)
        {
            cost = lif*4 + 2*5 + 3*3;
        }
        else
        {
            cout << per-lif << endl;
            cost = per*4 + 2*5 + 3*3 + (per-lif)*4;
        }
        printf("Case %d: %lld\n", j+1, cost);
    }
}
