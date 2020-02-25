#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int w, h, i, n, temp, flag = 1;
    scanf("%lld", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lld %lld", &w, &h);
        if(i == 0)
        {
            if(w > h)
                temp = w;
            else
                temp = h;
        }
        else if(temp >= w && temp >= h)
        {
            if(w > h)
                temp = w;
            else
                temp = h;
        }
        else
        {
            if(temp >= w)
                temp = w;
            else if(temp >= h)
                {
                    temp = h;
                }
            else
            {
                flag = 0;
               //break;
            }

        }
    }
    if(flag)
        printf("YES");
    else
        printf("NO");
}
