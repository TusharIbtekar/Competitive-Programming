#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i, k = 0, n, ar[1005] = {0}, a[1005];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    int cnt = 1;
    for(i = 1; i < n+1; i++)
    {
        if(ar[i] == 1)
            cnt++;
        if(ar[i] == 1 || ar[i] == 0)
        {
            a[k] = ar[i-1];
            k++;
        }
    }
    printf("%d\n", cnt);
    for(i = 0; i < cnt; i++)
        printf("%d ", a[i]);
}
