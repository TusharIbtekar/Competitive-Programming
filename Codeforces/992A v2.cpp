#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    set< long long int >s;
    long long int a, flag = 0, n, i, x;
    scanf("%lld", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &a);
        s.insert(a);
        if(a == 0)
            flag = 1;
    }
    if(flag)
        x = s.size() - 1;
    else
        x = s.size();
    printf("%lld\n", x);
}
