#include<stdio.h>
int main()
{
    int ar[4], i, j, temp;
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(i = 0; i < 4; i++)
    {
        for(j = i+1; j < 4; j++)
        {
            if(ar[i] > ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    if(ar[0] + ar[1] > ar[2] || ar[1] + ar[2] > ar[3] || ar[0] + ar[2] > ar[3])
        printf("TRIANGLE\n");
    else if(ar[0] + ar[1] == ar[2] || ar[1] + ar[2] == ar[3] || ar[0] + ar[2] == ar[3])
        printf("SEGMENT\n");
    else
        printf("IMPOSSIBLE\n");
    return 0;




}
