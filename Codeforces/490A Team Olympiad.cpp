#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, d, ar[5005], w = 0, n, cnt1 = 0, cnt2 = 0, cnt3 = 0, l, r;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] == 1)
            cnt1++;
        else if(ar[i] == 2)
            cnt2++;
        else
            cnt3++;
    }
    w = min(cnt1, min(cnt2, cnt3));
    printf("%d\n", w);
    while(w--)
    {
        for(i = 0; i < n; i++)
        {
            if(ar[i] == 1)
            {
                ar[i] = 0;
                printf("%d ", i+1);
                break;
            }
            else
                continue;
        }
        for(i = 0; i < n; i++)
        {
            if(ar[i] == 2)
            {
                ar[i] = 0;
                printf("%d ", i+1);
                break;
            }
            else
                continue;
        }
        for(i = 0; i < n; i++)
        {
            if(ar[i] == 3)
            {
                ar[i] = 0;
                printf("%d ", i+1);
                break;
            }
            else
                continue;
        }
        printf("\n");
    }



}
