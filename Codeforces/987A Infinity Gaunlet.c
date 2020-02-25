#include<stdio.h>
int main()
{
    int i, n;
    char str[10];
    char clr[7][8] = {"purple", "green", "blue", "orange", "red", "yellow"};
    char stn[7][8] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    scanf("%d", &n);
    printf("%d\n", (6-n));
    while(n--)
    {
        scanf("%s", str);
        for(i = 0; i < 6; i++)
        {
            if(str[0] == clr[i][0])
            {
                clr[i][0] = '-';
                break;
            }
        }
    }

    for(i = 0; i < 6; i++)
    {
        if(clr[i][0] != '-')
            printf("%s\n", stn[i]);
    }
}
