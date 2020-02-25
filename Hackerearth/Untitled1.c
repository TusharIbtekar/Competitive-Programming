#include<bits/stdc++.h>

using namespace std;
long long int a[100000];

int binarySearch(long long int low, long long int high, long long int key)
{
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
    long long int n, i, key, x, l, h;
    scanf("%lld", &n);
    for(i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    l = 0;
    h = n-1;
    sort(a, a+n);
    x = binarySearch(l,h,key);
    printf("%lld\n", x+1);
}
