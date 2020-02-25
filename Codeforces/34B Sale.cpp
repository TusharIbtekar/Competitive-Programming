#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, cnt = 0, sum = 0, ar[5000];
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    sort(ar, ar+n);
    for(i = 0; i < m; i++)
    {
        if(ar[i] < 0)
            sum += abs(ar[i]);
    }
    printf("%d", sum);
}
