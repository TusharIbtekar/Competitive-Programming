#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, l, count = 0;
    scanf("%s", str);

    l = strlen(str);

    for(i = 0; i < l; i++)
        for(j = i+1; j < l; j++)
            {
                if(str[i] == str[j])
                    {count++;
                    break;}
            }
    if((l-count) % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
