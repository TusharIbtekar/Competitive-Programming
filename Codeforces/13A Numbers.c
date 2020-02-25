#include<stdio.h>
int main()
{
    int n, t, i, sum = 0, x;
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        t = n;
        while(t != 0)
        {
            sum += t % i;
            t = t / i;
        }
    }
    for(i = 1; i <= sum || i <= (n-2); i++)
    {
        if(sum % i == 0 && (n-2) % i == 0)
            x = i;
    }
    printf("%d/%d", sum/x, (n-2)/x);
}
