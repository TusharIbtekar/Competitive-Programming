#include<stdio.h>
int main()
{
    char str[100];
    int i, count = 0, n;
    scanf("%d", &n);
    scanf("%s", str);
    for(i = 0; i < n; i++)
    {
        if(str[i] == 'x' && str[i+1] == 'x' && str[i+2] == 'x')
            count++;
    }
    printf("%d", count);
}
