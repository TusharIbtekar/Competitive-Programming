#include<stdio.h>
int main()
{
    long long int n, k, j;
    scanf("%lld %lld", &n, &k);
    char str[n], i;
    scanf("%s", str);
    while(1)
    {
        for(i = 'a'; i <= 'z'; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(k == 0)
                    break;
                if(str[j] == i)
                    {
                        str[j] = '0';
                        k--;
                    }
            }
        }
    }
    for(j = 0; j < n; j++)
        if(str[j] != '0')
            printf("%c", str[j]);
        return 0;
}
