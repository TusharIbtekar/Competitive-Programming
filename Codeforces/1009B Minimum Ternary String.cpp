#include<bits/stdc++.h>
using namespace std;
char ar[100005];
int main()
{
    int i, l, temp, one = 0;
    scanf("%s", ar);
    l = strlen(ar);
    for(i = 0; i < l; i++)
    {
        if(ar[i] == '1')
            one++;
    }
    for(i = 0; i < l; i++)
    {
        if(ar[i] == '0')
            printf("0");
        else if(ar[i] == '2')
        {
            while(one > 0)
            {
                printf("1");
                one--;
            }
            printf("2");
        }
    }
    while(one > 0)
    {
        printf("1");
        one--;
    }
}
