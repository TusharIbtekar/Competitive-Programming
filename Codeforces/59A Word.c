#include<stdio.h>
int main()
{
    char str[101];
    int upcnt = 0, lwcnt = 0, i;
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            upcnt++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            lwcnt++;
    }
    for(i = 0; i < strlen(str); i++)
    {
        if(upcnt > lwcnt)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = 'A'+ str[i] - 'a';
                /*else
                    str[i] = str[i];*/
            }
        else if(upcnt < lwcnt || upcnt == lwcnt)
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = 'a'+ str[i] - 'A';
                /*else
                    str[i] = str[i];*/
            }
    }
    printf("%s", str);
}
