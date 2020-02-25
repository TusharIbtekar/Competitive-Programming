#include<stdio.h>
int main()
{
    int a, b, c, n, ans;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    ans = n - (a-c+b);
    if(ans > 0 && a > c && b > c)
        printf("%d", ans);

    else
        printf("-1");



}
