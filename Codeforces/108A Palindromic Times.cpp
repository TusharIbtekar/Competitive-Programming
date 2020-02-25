#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, hr, mn, hpal, mpal;
    scanf("%d:%d", &hr, &mn);
    if(hr > 5 && hr < 10)
        printf("10:01");
    else if(hr > 14 && hr < 20)
        printf("20:02");
    else if(hr == 23 && mn < 32)
        printf("23:32");
    else if(hr > 22)
        printf("00:00");
    else
    {
        hpal = (hr%10)*10 + hr/10;
        if(hpal == mn)
        {
            if(hr < 10)
                printf("0%d:%d", hr+1, hpal+10);
            else
                printf("%d:%d", hr+1, hpal+10);
        }
        else if(hpal < 10)
        {
            if(hr < 10)
                printf("0%d:%d", hr+1, hpal+10);
            else
                printf("%d:%d", hr+1, hpal+10);
        }
        else if(hpal < mn)
        {
            if(hr < 10)
                printf("0%d:%d", hr+1, hpal+10);
            else
                printf("%d:%d", hr+1, hpal+10);
        }
        else
        {
            if(hr < 10)
                printf("0%d:%d", hr, hpal);
            else
                printf("%d:%d", hr, hpal);
        }

    }

}
