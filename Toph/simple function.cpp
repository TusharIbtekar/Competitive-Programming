#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, t;
    double f, x1;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &x);
        x1 = x;
        if(x == 0)
            printf("Undefined\n");
        else{
            f = (x1*x1*x1*x1 - 3.0)/(-8.0 * x1*x1);
            printf("%.2lf\n", f);
        }
    }
}
