#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, a = 0, d = 0;
    char f;
    scanf("%lld", &n);
    for(i = 0; i < n; i++)
    {
        scanf(" %c", &f);
        if(f == 'A')
            a++;
        else
            d++;
    }
    if(a < d)
        printf("Danik");
    else if(a > d)
        printf("Anton");
    else
        printf("Friendship");
}
