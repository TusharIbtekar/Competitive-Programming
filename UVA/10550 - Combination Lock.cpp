#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, comb = 0, first, second, third;
    while(1)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;
        if(a < b)
            first = 40-b+a;
        else
            first = a-b;
        if(b > c)
            second = 40-b+c;
        else
            second = c-b;
        if(c < d)
            third = 40-d+c;
        else
            third = c-d;
        printf("%d\n", (1080 + (first+second+third) * 9));
    }
}
