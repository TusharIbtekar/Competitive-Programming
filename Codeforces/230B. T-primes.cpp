#include<bits/stdc++.h>
using namespace std;
//long long int prime[2000005];
bitset<1000005>chk;
int MAXN = 1000005, a;
void sieve()
{
    int i, j, m;
    m = sqrt(MAXN);
    chk.reset();
    for(i = 2; i < m; i++)
    {
        if(chk[i] == 0)
        {
            for(j = i*i; j < MAXN; j += i)
                chk[j] = 1;
        }
    }
}
int main()
{
    long long int n, d, s;
    scanf("%lld", &n);
    sieve();
    while(n--)
    {
        scanf("%lld", &d);
        s = sqrt(d);
        if(s*s == d && d != 1)
        {
            if(!chk[s] || s == 2)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
}
