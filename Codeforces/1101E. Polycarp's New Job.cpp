#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int mx = -9, mn = -9, x, y, h, w, t;
    char c;
    scanf("%lld", &t);
    while(t--)
    {
        scanf(" %c", &c);
        scanf("%lld %lld", &h, &w);
        if(h < w)
            swap(h, w);
        /*if(c == '+')
        {
            x =h; //max(h, x);
            y =w; //max(w, y);
            //printf("max %lld %lld\n", x, y);
            taka = max(x*y, taka);
        }*/
        if(c == '?')
        {
            if(mn <= h && mx <= w)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            mn = max(mn, h);
            mx = max(mx, w);
        }
    }
}
