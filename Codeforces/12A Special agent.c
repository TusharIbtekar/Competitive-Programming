#include<stdio.h>
int main()
{
    int x, count = 0, i;
    char ar[50];
    for(i = 0; i < 9; i++)
        scanf(" %c", &ar[i]);
    for(i = 0; i < 9; i++)
    {
        if(ar[i] == ar[8-i])
            count++;
           // printf("%d ",count);
    }
    if(count == 9)
        printf("YES");
    else
        printf("NO");

}
