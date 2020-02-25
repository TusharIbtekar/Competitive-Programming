#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[105];
    long long int i, t, cnt = 0, j, k, l;
    scanf("%s", str);
    l = strlen(str);
    for(i = 0; i < l; i++)
    {
        if(str[i] == 'Q')
        {
            for(j = i+1; j < l; j++)
            {
                if(str[j] == 'A')
                    for(k = j; k < l; k++)
                        if(str[k] == 'Q')
                            cnt++;
            }
        }
    }
    printf("%lld\n", cnt);
}


