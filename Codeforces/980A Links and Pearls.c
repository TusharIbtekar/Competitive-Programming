#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int l, i, count = 0, count1 = 0;
    scanf("%s", str);
    l = strlen(str);
    for(i = 0; i < l; i++)
    {
        if(str[i] == '-')
            count++;
        else
            count1++;
    }
    if(count1 == 0 || count == 0)
        printf("YES\n");
    else if(count%count1 == 0)
        printf("YES\n");

    else
        printf("NO\n");
}
