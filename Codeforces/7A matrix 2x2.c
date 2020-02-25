#include<stdio.h>
#include<string.h>
int main()
{
    char s[8][9];
    int i, j, count = 0, count1 = 0, c;
    for(i = 0; i < 8; i++)
    {
        gets(s[i]);
        count = 0;
        for(j = 0; j < 8; j++)
        {
            if(s[i][j] == 'B')
                count++;
        }
        if(count == 8)
            count1++;
        else
            c = count;
    }
    printf("%d", count1 + c);
}
