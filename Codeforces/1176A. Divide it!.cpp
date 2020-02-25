#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, q;
    scanf("%lld", &q);
    while(q--)
    {
        int cnt = 0, fl = 0;
        scanf("%lld", &n);
        while(1)
        {
            if(n == 1)
                break;
            if(n%2 == 0)
            {
                n /= 2;
                cnt++;
            }
            else if(n%3 == 0)
            {
                n = (2*n)/3;
                cnt++;
            }
            else if(n%5 == 0)
            {
                n = (4*n)/5;
                cnt++;
            }
            else
            {
                printf("-1\n");
                fl = 1;
                break;
            }
        }
        if(!fl)
            printf("%d\n", cnt);
    }
}
