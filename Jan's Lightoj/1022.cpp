#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r, sq, cir, ar;
    int t, i;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%lf", &r);
        cir = acos(-1.0) * r * r;
        sq = 4 * r * r;
        ar = sq - cir;
        printf("Case %d: %.2lf\n", i, ar);
    }

}
