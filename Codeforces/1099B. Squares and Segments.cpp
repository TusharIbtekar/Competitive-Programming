#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, bars, req, flag = 0;
    scanf("%lld", &n);
    bars = sqrt(n);
    req = bars-1;
    if(bars*bars == n)
    {
        printf("%lld\n", bars+bars);
        return 0;
    }
    //printf("%lld\n", bars);
    while(1)
    {
        if(bars*req >= n)
        {
            break;
        }
        else
        {
            req++;
            flag = 1;
        }
    }
    /*if(!flag)
    {
        while(1)
        {
            flag = 1;
            if(bars*bars <= n)
                break;
            bars--;
            printf(":::");
        }
    }*/
    printf("%lld\n", bars+req);
    /*if(n%2 || n == 2)
        printf("%lld", bars+req);
    else
        printf("%lld", bars+bars);*/
}
