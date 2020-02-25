#include<stdio.h>
int main()
{
    int n, d, i, a, b, x, count = 0;
    scanf("%d %d", &n, &d);
    scanf("%d", &a);
    for(i = 1; i < n; i++)
    {
        scanf("%d", &b);
        if(a >= b)
        {
            x = (a - b)/d + 1;
            a = b + d*x;
            count = count + x;
        }
        else
            a = b;
    }
    printf("%d", count);
}
