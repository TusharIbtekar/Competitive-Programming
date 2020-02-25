#include<stdio.h>
int main()
{
    int n, k, x = 0, i;
    scanf("%d %d", &n, &k);
    for(i = 0; i < k; i++)
    {
        if(n % 10 == 0)
            {
                x = n / 10;
                n = x;
            }
        else
            {
                x = n - 1;
                n = x;
            }
    }
    printf("%d", x);
}
