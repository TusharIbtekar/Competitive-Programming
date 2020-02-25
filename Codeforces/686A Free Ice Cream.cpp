#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x, d, i, cnt = 0, sum = 0;
    char sign;
    scanf("%lld %lld", &n, &x);
    sum = x;
    for(i = 0; i < n; i++)
    {
        scanf(" %c %lld", &sign, &d);
        if(sign == '+')
            sum += d;
        else if(sign == '-')
        {
            if(d <= sum)
                sum -= d;
            else
                cnt++;
        }
    }
    printf("%lld %lld", sum, cnt);
}
