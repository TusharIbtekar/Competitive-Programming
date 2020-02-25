#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s, n, x, y, i, j, t, cs = 0, col, row;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &s);
        long long rot = sqrt(s);
        if(rot*rot == s)
        {
            if(rot%2)
            {
                col = 1;
                row = rot;
            }
            else
            {
                col = rot;
                row = 1;
            }
            printf("Case %lld: %lld %lld\n", ++cs, col, row);
            continue;
        }
        //rot++;
        j = s - rot*rot;
        if(j <= rot)
        {
            if(rot%2)
            {
                row = rot + 1;
                col = j ;
            }
            else
            {
                row = j;
                col = rot + 1;
            }
        }
        else if(j > rot && rot%2 == 1)
        {
            row = (rot+1)*(rot+1) - s + 1;
            col = rot+1;
        }
        else
        {
            row = rot+1;
            col = (rot+1)*(rot+1) - s + 1;
        }
        printf("Case %lld: %lld %lld\n", ++cs, col, row);

    }
}
