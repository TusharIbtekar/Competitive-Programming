#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[15], n, i, j, so[15] = {0}, mid, sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        so[i] = ar[i];
    }
    sort(ar, ar+n);
    mid = ar[0];
    for(i = 1; i < n; i++)
    {
        sum += ar[i];
    }
    if(sum == mid || n < 2)
        printf("-1");
    else
    {
        printf("1\n");
        for(i = 0; i < n; i++)
            if(so[i] == mid)
                {
                    printf("%d", i+1);
                    break;
                }
    }

}
