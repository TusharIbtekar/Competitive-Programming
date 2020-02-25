#include<stdio.h>
int main()
{
    int n, i, flag = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str+1);
    str[0] = '0';
    str[n+1] = '0';
    for(i = 1; i < n+1; i++)
    {
        if((str[i] == '0' && str[i+1] == '0' && str[i-1] == '0') || (str[i] == '1' && str[i+1] == '1'))
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("No\n");
    else
        printf("Yes\n");
}
