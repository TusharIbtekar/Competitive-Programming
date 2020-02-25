#include<stdio.h>
int main()
{
    int n, a[1000], b[1000], d, i, j, min = 0, x = 0;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for(i = 0; i < n; i++)
        {
            d = x - a[i] + b[i];
            x = d;
            if(d > min)
                min = d;
        }
    printf("%d\n", min);
    return 0;
}
