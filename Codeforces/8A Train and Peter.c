#include<stdio.h>
int main()
{
    char a[100001], w1[101], w2[101];
    int i, j, count1 = 0, count2 = 0, count3 = 0;
    scanf("%s", a);
    scanf("%s", w1);
    scanf("%s", w2);
    for(i = 0; a[i] != '\0'; i++)
    {
        for(j = 0; w1[j] != '\0' || w2[j] != '\0'; j++)
        {
            if(a[i] == w1[j])
            {
                count1++;

            }
            else if(a[i] == w2[j])
            {
                count2--;
            }
            else
            {
                count3++;
            }
        }
    }
    if(count1 > 0)
        printf("forward");
    else if(count2 < 0)
        printf("backward");
    else if(count3 > 0)
        printf("fantasize");
    else
        printf("both");
}
