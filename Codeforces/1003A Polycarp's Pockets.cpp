#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[105] = {0}, i, n, c, cnt = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &c);
        ar[c]++;
    }
    for(i = 1; i <= 100; i++)
    {
        if(cnt < ar[i])
        {
            cnt = ar[i];
        }
    }
    printf("%d", cnt);
}
