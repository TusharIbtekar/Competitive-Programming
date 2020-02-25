#include<stdio.h>
int main()
{
    int i, ca= 0, cb = 0, cc = 0, flag = 0, flag1 = 0;
    char s;
    while(s != '\n')
    {
        scanf("%c", &s);
        if(s == '\n')
            break;
        if(s == 'a')
        {
            ca++;
            if(flag == 1)
            {
                ca = 0;
                //printf("NO\n");
                break;
                return 0;
            }
        }
        else if(s == 'b')
        {
            cb++;
            flag = 1;
            if(flag1 == 1)
            {
                cb = 0;
                //printf("NO\n");
                break;
                return 0;
            }
        }
        else if(s == 'c')
        {
            cc++;
            flag1 = 1;
            if(flag1 == 0 || flag == 0)
            {
                cc = 0;
                //printf("NO\n");
                break;
                return 0;
            }
        }

    }
    if((ca == cc || cb == cc) && ca > 0 && cb > 0 && ca > 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
