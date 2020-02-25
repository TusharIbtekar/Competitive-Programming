#include<stdio.h>
int main()
{
    int a, b, c, i, d, e, count = 0;
    double p;
    scanf("%d %d", &a, &b);
    if(a > b)
        c = a;
    else
        c = b;
    for(i = c; i <= 6; i++)
    {
        count++;

    }
    if(6 % count == 0)
    {
        e = 6 / count;
        d = 1;
    }
    else if(count % 2 == 0)
    {
        e = 6 * 0.5;
        d = count * 0.5;
    }
    else
    {
        e = 6;
        d = count;
    }
    printf("%d/%d", d, e);
}
