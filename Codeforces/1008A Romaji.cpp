#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[103];
    int i, k, l, flag = 1;
    scanf("%s", str);
    l = strlen(str);
    for(i = 0; i < l; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'n')
            continue;
        else
        {
            if(str[i+1] != 'a' && str[i+1] != 'e' && str[i+1] != 'i' && str[i+1] != 'o' && str[i+1] != 'u')
                flag = 0;
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO");

}
