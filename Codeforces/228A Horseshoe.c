#include<stdio.h>
int main()
{
    int a, s, d, f, count = 0;
    scanf("%d %d %d %d", &a, &s, &d, &f);
    if(a == s || a == d || a == f)
        count++;
    if(s == d || s == f)
        count++;
    if(d == f)
        count++;
    printf("%d\n", count);
}
