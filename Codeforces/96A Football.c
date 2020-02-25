#include<stdio.h>
int main()
{
    int count=1,i,j;
    char st[100];
    scanf("%s",st);
    for(i = 0;st[i] != '\0';i++)
    {
        if(st[i] == st[i+1])
            {
                count++;
                if(count == 7)
                    {
                        printf("YES\n");
                        break;

                    }
                }
        else
                    count = 1;
    }
    if(count<7)
        printf("NO\n");
    return 0;
}
