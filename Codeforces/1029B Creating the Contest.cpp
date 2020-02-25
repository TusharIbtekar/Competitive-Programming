#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[200005], n, i, cnt = 2, hi;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    for(i = 0; i < n; i++)
    {
        cnt = ar[i]*2;
        hi = upper_bound(ar, ar+n, cnt);
    }
    printf("%d", hi);
}
