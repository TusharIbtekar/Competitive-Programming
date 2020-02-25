#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t, x1, x2, x3, y2, y1, y3, r1, r2, i;
    scanf("%lf", &t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &r1);
        x3 = (x1+x2)/2;
        y3 = (y1+y2)/2;
        r2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1)) + r1;
        printf("%.2lf %.2lf %.2lf\n", x3, y3, r2);
    }
}
