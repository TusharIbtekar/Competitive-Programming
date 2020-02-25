#include<stdio.h>
long long int ar[100001], m,n;

int asd(long long int mid);

int main()
{
    long long int sum = 0, high, low, i, mid;
    scanf("%lld %lld", &n, &m);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
        sum += ar[i];
    }
    high = sum;
    low = 0;
    while(low <= high )
    {
        mid = (high+low)/2;
        if(asd(mid))
        {
            high = mid-1;
        }
        else
            low = mid + 1;
    }
    printf("%lld\n", low);
}

int asd(long long int mid)
{
    long long int i,days = 1, mintime = 0;
    for(i = 0; i < n; i++)
    {
        if(ar[i] > mid)
            return 0;
        if(mintime + ar[i] > mid)
        {
            days++;
            mintime = ar[i];
        }
        else
            mintime += ar[i];
    }
    return days<=m;
}
