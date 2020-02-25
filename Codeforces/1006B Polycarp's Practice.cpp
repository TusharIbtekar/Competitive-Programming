#include<bits/stdc++.h>
using namespace std;
int i, j, ar[2005], br[2005], n, sum, k, cr[2005], x = 0, sum1;
int main()
{
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        br[i] = ar[i];
    }
    sort(ar, ar+n, greater<int>());
    for(i = 0; i < k; i++)
    {
        sum += ar[i];
    }
    printf("%d\n", sum);
    for(i = 0; i < n; i++)
        for(j = 0; j < k; j++)
        {
            if(br[i] == ar[j])
            {
                ar[j] = 0;
                cr[x] = i+1;
                x++;
                break;
                //sum1 += j;
            }
        }
    cr[k-1] = n;
    for(i = 0; i < k; i++)
    {
        if(i == 0)
            printf("%d ", cr[0]);
        else
            printf("%d ", abs(cr[i] - cr[i-1]));
    }


}
