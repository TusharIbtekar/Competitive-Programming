#include<bits/stdc++.h>
using namespace std;
long long int ar[105];
int main()
{
    long long int sum = 0, cnt = 0, c = 0, d, mx = 0, n, i;
    scanf("%lld", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &d);
        ar[i] = d;
        while(d != 0)
        {
            d /= 10;
            c++;
        }
        mx = max(c, mx);
    }
    while(mx--)
    {
        for(i = 0; i < n; i++)
        {
            sum += ar[i] % 10;
            ar[i] /= 10;
        }
        sum /= 10;
        if(sum > 0)
            cnt++;
    }
    while(sum > 10)
    {
        sum /= 10;
        cnt++;
    }
    printf("%lld", cnt);
}
