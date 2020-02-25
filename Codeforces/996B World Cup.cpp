#include<bits/stdc++.h>

using namespace std;
//int mx=1e5;
//MAX++;
int i, n, j = 0;
int ar[100001];
int main()
{
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    i = 0;
    for(i = 0;; i++)
    {
        if(i+1 == n)
        {
            if((ar[i] - j) <= 0)
                break;
            else
            {
                i = 0;
                j++;
            }
        }

        if((ar[i] - j) <= 0)
            break;
        j++;
    }
    printf("%d", i+1);
}
