#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, i, sum1, sum2, sum3, sum4, sum, sum5;
    scanf("%d %d %d", &a, &b, &c);
    sum1 = a+(b*c);
    sum2 = a*(b+c);
    sum3 = a*b*c;
    sum4 = (a+b)*c;
    sum5 = a+b+c;
    sum = max(sum1,(max(sum2,max(sum3, max(sum4, sum5)))));
    printf("%d", sum);
}
