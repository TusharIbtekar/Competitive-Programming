#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    int n, x, y, i, j;
    scanf("%d%d%d", &n, &x, &y);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    bool flag = 0;
    for(i = 0; i < n; i++)
    {
        flag = 0;
        for(j = i; j >= i-x; j--)
        {
            if(ar[i] > ar[j])
            {
                flag = 1;
                break;
            }
            if(j == 0)
                break;
        }
        for(j = i; j <= i+y; j++)
        {
            if(ar[i] > ar[j])
            {
                flag = 1;
                break;
            }
            if(j == n-1)
                break;
        }
        if(!flag)
            break;
    }
    if(i == n)
        i--;
    printf("%d", i+1);
}
