#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i, li, bo;
    scanf("%d %d", &li, &bo);
    i = 0;
    while(li <= bo)
    {
        li = li * 3;
        bo = bo * 2;
        i++;
    }
    printf("%d", i);
}
