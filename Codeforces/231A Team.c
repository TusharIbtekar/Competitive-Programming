#include<stdio.h>
int main()
{
    int n, a ,b ,c, sum = 0, count = 0, i;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        sum = 0;
        scanf("%d %d %d", &a, &b, &c);
        sum = a+b+c;
        if(sum >= 2)
            count++;
    }
    printf("%d\n", count);
}
