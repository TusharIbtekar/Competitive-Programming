#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, cnt = 0, n, q, pwrb, sum = 0;
    scanf("%d", &n);
    long long int pwr[n];
    for(i = 0; i < n; i++)
        scanf("%lld", &pwr[i]);
    scanf("%lld", &q);
    while(q--)
    {
        scanf("%lld", &pwrb);
        cnt = 0;
        sum = 0;
        for(i = 0; i < n; i++)
            if(pwrb >= pwr[i])
            {
                cnt++;
                sum += pwr[i];
            }
        printf("%lld %lld\n", cnt, sum);
    }
}

