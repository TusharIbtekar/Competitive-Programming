#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t, rev = 0, dig, cs = 0, prev;
    scanf("%lld", &t);
    while(t--)
    {
        rev = 0;
        scanf("%lld", &n);
        prev = n;
        while(n != 0)
        {
            dig = n % 10;
            rev = (rev*10) + dig;
            n /= 10;
        }
        if(rev == prev)
            printf("Case %lld: Yes\n", ++cs);
        else
            printf("Case %lld: No\n", ++cs);
    }
}
