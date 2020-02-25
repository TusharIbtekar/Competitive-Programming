#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, n, d, dcnt = 0, ocnt = 0, a = 0, b = 0;
    long long int arp[100006] = {0}, arn[100006] = {0};
    scanf("%lld", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &d);
        if(d > 0)
        {
            arp[d]++;
            //a++;
        }
        if(d < 0)
        {
            arn[abs(d)]++;
            //b++;
        }

    }
    for(i = 0; i < 100006; i++)
    {
        if(arp[i] != 0)
            dcnt++;
        if(arn[i] != 0)
            ocnt++;
    }
    printf("%lld\n", dcnt + ocnt);
}
