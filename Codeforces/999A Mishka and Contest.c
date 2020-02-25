#include<stdio.h>
int main()
{
    int i, ar[101], n, k, cnt = 0, cnt1 = 0;
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(ar[i] <= k)
            cnt++;
        else
            break;
    }
    for(i = n-1; i >=0; i--)
    {
        if(ar[i] <= k)
            cnt++;
        else
            break;
    }
    if(cnt == 2*n)
        cnt = cnt/2;
    printf("%d\n", cnt);

}
