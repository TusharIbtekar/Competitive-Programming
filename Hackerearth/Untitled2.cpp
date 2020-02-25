#include<bits/stdc++.h>

using namespace std;
long long int a[100000];

int binarySearch(long long int n, long long int key)
{
    long long int low = 0, high = n;
    while(low <= high)
    {
        long long int mid = (low+high)/2;
        if(a[mid] < key)
            low = mid+1;
        else if(a[mid] > key)
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    long long int n, i, key, x, t, y;
    scanf("%lld", &n);
    for(i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    scanf("%lld", &t);
    sort(a, a+n);
    while(t--)
    {
        scanf("%lld", &key);
        x = binarySearch(n,key);
        printf("%lld\n", x+1);
    }
}

