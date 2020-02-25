#include<stdio.h>
int main()
{
    int n, i, count = 0;
    char ar[100];
    scanf("%d", &n);
    scanf("%s", &ar);
    for(i = 0; i < n; i++)
    {
        if(i == 0 && ar[0] == '1')
        {
            printf("1");
        }
        if(ar[i] == '0')
            {
                count++;
            }
    }
    for(i = 0; i < count; i++)
        printf("0");
    return 0;
}
