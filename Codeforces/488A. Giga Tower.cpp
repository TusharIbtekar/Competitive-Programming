#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, dummy, dump, flag = 0, rem, ans = 0;
    scanf("%lld", &n);
    dummy = n;
    while(1)
    {
        n++;
        ans++;
        if(n < 0)
            dump = n*-1;
        else
            dump = n;
        while(dump)
        {
            rem = dump%10;
            dump /= 10;
            if(rem == 8)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            break;
    }
    printf("%lld\n", ans);

}
