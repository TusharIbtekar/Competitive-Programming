#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], str1[100];
    int i, l, j;

    scanf("%s",str);

    l = strlen(str);

    for(i = 0; i < l; i++)
    {
        if(str[i] <= 'Z' && str[i] >= 'A')
            str[i] = 'a' + str[i] - 'A';
        else
            str[i] = str[i];
    }
    for(i = 0; i < l; i++)
    {
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'y')
            {
                str1[i] = str[i];
            }
        else
            {
                printf(".%c",str[i]);
            }
    }
}
