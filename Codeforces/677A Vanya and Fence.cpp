#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, i, ar[1005], ans = 0;
    scanf("%d %d", &n, &h);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for(i = 0; i < n; i++)
    {
        if(ar[i] > h)
            ans += 2;
        else
            ans++;
    }
    printf("%d", ans);
}
