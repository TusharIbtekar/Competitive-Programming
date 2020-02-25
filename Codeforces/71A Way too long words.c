#include<stdio.h>
int main()
{
    char str[101];
    int j,i,n,l=0;
    scanf("%d",&n);
    for(j = 0;j < n;j++)
    {
        scanf("%s",&str);
        if(strlen(str)>10)
        {
            l=0;
            for(i = 1; str[i] != '\0';i++)
                {l++;}
            printf("%c%d%c\n",str[0],l-1,str[strlen(str)-1]);

        }
        else
        {
            printf("%s\n",str);
        }

    }
    return 0;


}
