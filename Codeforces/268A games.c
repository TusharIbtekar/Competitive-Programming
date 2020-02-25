#include<stdio.h>
int main()
{
    int n, h[101], a[101], i, j, count = 0;
    scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d %d", &h[i], &a[i]);
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                if(h[i] == a[j])
                    count++;
    printf("%d\n", count);
}
