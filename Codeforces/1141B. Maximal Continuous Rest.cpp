#include<bits/stdc++.h>
using namespace std;
int ar[1000000];
int main()
{
    int n, cnt = 0, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(i = 1; i < n; i++)
    {
        if(ar[i])
            ar[i] = ar[i]+ar[i-1];

    }
    if(ar[n-1] && ar[0])
    {
        for(i = 0; i < n; i++)
        {
            if(!ar[i])
                break;
            ar[n-1]++;
        }
    }
    sort(ar, ar+n);

    printf("%d\n", ar[n-1]);
}
