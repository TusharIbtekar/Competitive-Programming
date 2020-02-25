#include<stdio.h>
int main()
{
    int i, j, k, m, n, temp;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            for(j = 0, k = i-1; k >= (i)/2; k--, j++)
            {
                temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }
}
