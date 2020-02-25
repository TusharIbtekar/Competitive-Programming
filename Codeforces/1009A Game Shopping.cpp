#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[1005], c[1005], i, j, cnt = 0;
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++)
        scanf("%d", &c[i]);
    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);
    j = 0;
    for(i = 0; i < n; i++)
    {
        if(a[j] >= c[i] && j < m)
        {
            cnt++;
            j++;
        }
    }
    printf("%d", cnt);
}
