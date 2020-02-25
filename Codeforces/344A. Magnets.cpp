#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, a, b, cnt = 1;
    scanf("%lld", &n);
    scanf("%lld", &b);
    for(i = 0; i < n-1; i++)
    {
        scanf("%lld", &a);
        if(a != b)
            cnt++;
        b = a;
    }
    printf("%lld", cnt);
}
