#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, l, r, m;
    bool out;
    scanf("%d %d", &n, &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &l, &r);
    }
    for(i = 0; i < n; i++)
    {
        printf("%d", out);
        if(out)
            out = 0;
        else
            out = 1;
    }

}
