#include<bits/stdc++.h>

using namespace std;
int ar[100001];

int main()
{
    int n, i, c1 = 0, c2 = 0, c3 = 0, c4 = 0, sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] == 4)
            c4++;
        else if(ar[i] == 3)
            c3++;
        else if(ar[i] == 2)
            c2++;
        if(ar[i] == 1)
            c1++;
    }
    //printf("%d", c4);
    if(c1 < c3 && c1 != 0)
        c1 = 0;
    else if(c1 >= c3 && c1 != 0)
        c1 = c1 - c3;
    sum = c4 + c3;
    if(c2 % 2 == 1)
        {
            c1 = c1+2;
            c2 = c2/2 ;
        }
    else
        c2 = c2/2 ;
    sum += c2;
    if(c1 <= 4 && c1 != 0)
        sum++;
    else if(c1 > 4 && c1 != 0)
        {
            sum += (c1)/4 ;
            if(c1%4)
                sum++;
        }
    printf("%d", sum);


}
