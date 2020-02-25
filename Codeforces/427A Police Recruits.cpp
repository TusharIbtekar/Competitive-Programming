#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i, sum = 0, cnt = 0;
    scanf("%lld", &n);
    int ar[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(ar[i] == -1)
            cnt++;
        if(ar[i] > 0)
        {
            sum += ar[i];
            continue;
        }
        if(sum != 0)
        {
            cnt--;
            sum--;
        }
    }
    printf("%lld", cnt);
}
