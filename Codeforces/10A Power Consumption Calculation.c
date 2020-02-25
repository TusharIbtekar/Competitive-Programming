#include<stdio.h>
int main()
{
    int n, p1, p2, p3, t1, t2, sum = 0, i, a, b, c;
    scanf("%d %d %d %d %d %d", &n, &p1, &p2, &p3, &t1, &t2);
    scanf("%d %d", &a, &b);
    sum += p1*(b - a);
    c = b;
    for(i = 1; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        sum += p1 * (b - a);
        if(t1 >= (a - c))
            sum += p1 * (a - c);
        else if(a - c > t1 && a - c <= (t1+t2))
            sum += p1 * t1 + p2 * (a - c - t1);
        else
            sum += p1 * t1 + p2 * t2 + p3 * ((a - c) - (t1 + t2));
        c = b;
    }
    printf("%d", sum);
}
