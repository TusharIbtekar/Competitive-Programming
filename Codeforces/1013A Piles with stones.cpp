#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum1 = 0, sum2 = 0, i, d;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &d);
        sum1 += d;
    }
    for(i = 0; i < n; i++)
    {
        scanf("%d", &d);
        sum2 += d;
    }
    if(sum1 >= sum2)
        printf("Yes");
    else
        printf("No");
printf("%d", 3 & 7);
}

