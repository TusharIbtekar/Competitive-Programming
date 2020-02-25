#include<stdio.h>
int main()
{
    int birds[1001], x, y, m, n, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d", &birds[i]);
    scanf("%d", &m);
    for(i = 1; i <= m; i++)
    {
        scanf("%d %d", &x, &y);
        birds[x+1] += birds[x] - y;
        birds[x-1] += (y-1);
        birds[x] = 0;
    }

    for(i = 1; i <= n; i++)
        printf("%d\n", birds[i]);
}
