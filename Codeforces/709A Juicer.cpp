#include<bits/stdc++.h>
using namespace std;
long long int ar[100005];
int main()
{
    long long int cnt = 0, n, b, d, sum = 0, i;
    scanf("%lld %lld %lld", &n, &b, &d);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
        if(ar[i] <= b)
            sum += ar[i];
        if(sum > d)
        {
            cnt++;
            sum = 0;
        }
    }
    printf("%lld", cnt);
}
