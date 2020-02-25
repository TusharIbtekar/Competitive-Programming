#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[1000] = {0}, i, cnt = 0, r, l, n, m, x = 0, chk[1000];
    scanf("%d %d", &n, &m);
    while(n--)
    {
        scanf("%d %d", &l, &r);
        for(i = l; i <= r; i++)
            ar[i]++;
    }
    for(i = 1; i <= m; i++)
    {
        if(ar[i] == 0)
        {
            cnt++;
            chk[x] = i;
            x++;
        }
    }
    printf("%d\n", cnt);
    for(i = 0; i < cnt; i++)
        printf("%d ", chk[i]);
}
