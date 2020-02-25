#include<stdio.h>
const int MAX = 1e5 + 10;
int ar[MAX];
int main()
{
    long long int i, n, j = 0;
    scanf("%lld", &n);

    for(i = 0; i < n; i++)
        scanf("%lld", &ar[i]);
    i = 0;
    for(i = 0;; i++)
    {
        if(i+1 == n)
        {
            if((ar[i] - j) <= 0)
                break;
            else
            {
                i = 0;
                j++;
            }
        }

        if((ar[i] - j) <= 0)
            break;
        j++;
    }
    printf("%lld", i+1);
}
