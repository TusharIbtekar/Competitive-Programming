#include<stdio.h>
int main()
{
    char str[1001];
    int i,l=0;
    scanf("%[^\n]s",str);
    for(i = 1;str[i] != '\0';i++)
    {
        if(str[i] >= 'A'&& str[i] <='Z')
            l++;
    }
    if(l==strlen(str)-1)
    {
        for(i = 0;str[i] != '\0';i++)
        {
            if(i == 0)
            {
                if(str[i] >= 'a' && str[i] <='z')
                {
                    str[i] = 'A'+ str[i] - 'a';
                }
                else
                    //str[i] = str[i];
                    {
                        str[i] = 'a'+str[i] - 'A';
                    }
            }
            else
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i] = 'a' + str[i] - 'A';
                }
            }
        }

    }

    printf("%s\n",str);
    return 0;

}
