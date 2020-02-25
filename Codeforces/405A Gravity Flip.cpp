#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ar[105], i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    sort(ar, ar+n);
    for(i = 0; i < n-1; i++)
        printf("%d ", ar[i]);
    printf("%d", ar[n-1]);
}
