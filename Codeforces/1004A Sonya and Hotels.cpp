#include<bits/stdc++.h>
using namespace std;

long long int d, ar[105], i, cnt, n, x;
int main()
{
    scanf("%lld %lld", &n, &d);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    for(i = 0; i < n-1; i++)
    {
        x = (ar[i+1] - ar[i]);

        if(x > 2*d)
            {
                cnt += 2;
            }
        if(x == 2*d)
            cnt++;

    }
    printf("%lld", cnt+2);
}
