#include<stdio.h>
int main()
{
    int i, j, count = 0, x, c, count1 = 0;
    char str[10];
    for(i = 0; i < 8; i++)
    {
        scanf("%s", str);
        count = 0;
        for(j = 0; str[j] != '\0'; j++){
            if(str[j] == 'B')
                count++;

        }
        if(count == 8)
            count1++;
        else
            c = count;

    }


    printf("%d", count1 + c);
}
