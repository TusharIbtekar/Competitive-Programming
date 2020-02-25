#include<bits/stdc++.h>
using namespace std;
long long int cmsm[1000005];
int main()
{
    long long int t, n, d, tot = 0;
    scanf("%d", &t);
    while(t--)
    {
        tot = 0;
        scanf("%lld", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &d);
            tot += d;
            cmsm[i] = tot;
        }
        printf("1");
        for(int i = 2; i <= n; i++)
        {
            int flag = 0;
            if(!(cmsm[n-1] % i))
            {
                d = cmsm[n-1] / i;
                long long int limit;
                limit = d;
                for(int j = 0; j < n; j++)
                {
                    if(cmsm[j] == limit)
                    {
                        limit += d;
                    }
                    else if(cmsm[j] > limit)
                    {
                        flag = 1;
                        printf("0");
                        break;
                    }
                }
                if(!flag)
                    printf("1");
            }
            else
                printf("0");
        }
        printf("\n");
    }
}
