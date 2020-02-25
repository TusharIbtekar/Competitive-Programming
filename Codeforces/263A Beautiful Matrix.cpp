#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, ar[6][7], a, b;
    for(i = 1; i <= 5; i++)
        for(j = 1; j <= 5; j++)
        {
            scanf("%d", &ar[i][j]);
            if(ar[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    printf("%d", abs(3-a)+abs(3-b));
}
