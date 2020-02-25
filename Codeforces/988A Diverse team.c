#include<stdio.h>
int main()
{
    int n, k, i, j, count = 0, count1 = 0, ar[1000];
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for(i = 0; i < n; i++)
        for(j = i+1; j < n; j++)
    {
        if(ar[i] == ar[j])
        {
            count++;
            ar[i] = 0;
            printf("%d ", count);

        }
    }
    if(n - count >= k || count == 0)
       {
            printf("YES\n");
            for(i = 0; i < n; i++)
                if(ar[i] != 0)
                    {
                        printf("%d ", i+1);
                        count1++;
                        if(count1 == k)
                            break;
                    }

       }
    else
        printf("NO\n");
}
