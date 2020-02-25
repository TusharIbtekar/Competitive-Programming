#include<bits/stdc++.h>
using namespace std;

int ar[1005], i, n;
int main()
{
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for(i = 0; i < n; i++)
    {
        if(ar[i] % 2 == 0)
            ar[i]--;
    }
    for(i = 0; i < n; i++)
        printf("%d ", ar[i]);
}
