#include<stdio.h>
int main()
{
    int k, r, i, temp, sum, flag = 1;
    scanf("%d %d", &k, &r);
    for(i = 1; i < 1000; i++)
    {
        sum = k*i;
        temp = sum%10;
        if(temp == 0 || temp == r)
        {
            printf("%d\n", i);
            break;
        }

    }

}
