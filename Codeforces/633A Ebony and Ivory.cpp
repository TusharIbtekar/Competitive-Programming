#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, a, b, c, x, flag = 0;
    scanf("%d %d %d", &a, &b, &c);
    for(i = 0; i <= c; i++)
    {
        if(i % a == 0 && (c - i) % b == 0)
            flag = 1;
    }
    if(flag)
        printf("Yes");
    else
        printf("No");
}
