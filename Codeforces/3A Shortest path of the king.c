#include<stdio.h>
int main()
{
    int x, y, i, r1, r2, d;
    char a, b;
    scanf("%c%d %c%d", &a, &x, &b, &y);
    r1 = abs(x - y);
    r2 = abs(a - b);

    if(r1 > r2)
        d = r1;
    else
        d = r2;
    printf("%d\n", d);
    for(i = 1; i <= d; i++)
    {
        if(a < b)
        {
            printf("R");
            a++;
        }
        if(a > b)
        {
            printf("L");
            a--;
        }
        if(x > y)
        {
            printf("D");
            x--;
        }
        if(x < y)
        {
            printf("U");
            x++;
        }
        printf("\n");
    }
}
