#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1005];
    int i, n = 0, l;
    while(gets(str))
    {
        l = strlen(str);
        for(i = 0; i < l; i++)
        {
            if(str[i] == '"')
            {
                n++;
                if(n % 2 == 1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c", str[i]);
        }
        printf("\n");
    }
}
