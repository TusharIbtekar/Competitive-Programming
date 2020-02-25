#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int i, l, flag = 0;
    scanf("%s", str);
    l = strlen(str);
    for(i = 0; i < l; i++)
    {
        if(str[i] == 'A' && str[i+1] == 'B' && str[i+2] == 'C')
            flag = 1;
        else if(str[i] == 'B' && str[i+1] == 'A' && str[i+2] == 'C')
            flag = 1;
        else if(str[i] == 'C' && str[i+1] == 'B' && str[i+2] == 'A')
            flag = 1;
        else if(str[i] == 'C' && str[i+1] == 'A' && str[i+2] == 'B')
            flag = 1;
        else if(str[i] == 'A' && str[i+1] == 'C' && str[i+2] == 'B')
            flag = 1;
        else if(str[i] == 'B' && str[i+1] == 'C' && str[i+2] == 'A')
            flag = 1;
    }
    if(flag == 1)
        printf("Yes\n");
    else
        printf("No\n");
}
