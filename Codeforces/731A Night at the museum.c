#include<stdio.h>
int main()
{
    char str[101];
    int i, n, sum = 0, dif;
    gets(str);
    n = 'a';
    for(i = 0; str[i] != '\0'; i++)
    {
        dif = abs(str[i] - n);
        if(dif < 13)
            sum += dif;
        else
            sum += 26 - dif;
        n = str[i];
    }
    printf("%d", sum);
}
