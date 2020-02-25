#include<stdio.h>
int main()
{
    char str[1001];
    int i;
    scanf("%s",str);
    for(i = 0;str[i] !='\0';i++)
    {
        if(i == 0)
        {
            if(str[i] >= 'a'&&str[i] <= 'z')
                str[i] = 'A' + str[i] - 'a';
        }
        else
            str[i] = str[i];
    }
    printf("%s\n",str);
}
