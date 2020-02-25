#include<stdio.h>
int main()
{
    char str[101], str1[101];
    int i, count = 0;
    scanf("%s", str);
    scanf("%s", str1);
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = 'a' + str[i] - 'A';
        if(str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] = 'a' + str1[i] - 'A';
    }
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == str1[i])
        {
            count++;
            if(count == strlen(str))
            {
                printf("0\n");
                break;
            }
        }
        else if(str[i] < str1[i])
        {
            printf("-1\n");
            break;
        }
        else if(str[i] > str1[i])
        {
            printf("1\n");
            break;
        }
    }
}
