#include<stdio.h>
#include<string.h>
int main()
{
    char c[100000];
    long long int i, n, count1 = 0, count = 0;
    scanf("%lld", &n);
    while(n--)
    {
        scanf(" %s", c);
        for(i = 0; i < strlen(c); i++)
        {
            if(c[i] == '(')
                count++;
            else if(c[i] == ')')
                count1++;

        }
    }
    if((count+count1)% n == 0)
        printf("%lld", count+count1);
    else if(count <= count1)
        printf("%lld\n", count);
    else
        printf("%lld\n", count1);
}
