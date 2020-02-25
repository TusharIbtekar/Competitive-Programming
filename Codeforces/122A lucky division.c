#include<stdio.h>
int main()
{
    int ar[100], i, k = 0, n, flag = 0, count = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            ar[k] = i;
            k++;
            count++;
        }
    }
    for(i = 0; i < count; i++)
    {
        flag = 0;
        n = ar[i];
        while(n != 0)
        {
            if(n % 10 != 4 && n % 10 != 7)
            {
                flag = 1;
                break;
            }
            else
                n /= 10;
        }
        if(flag == 0)
            break;
    }
    if(flag == 0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
}
