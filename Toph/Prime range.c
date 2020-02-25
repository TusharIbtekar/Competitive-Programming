#include<stdio.h>
#include<math.h>
#include<stdbool.h>


bool ar[100000000+9];
long long int a2[10000000];
long long int a;

void sieve()
{
    long long int i, j;
    a = 1;
    ar[0] = 0;
    ar[1] = 0;
    a2[0] = 0;
    for(i = 2; i < 100000000 ; i++)
        ar[i] = 1;
    //printf("abra ka dabra");
    for(i = 2; i <= sqrt(100000000); i++)
        if(ar[i] == 1)
        {
            for(j = 2; i*j <= 100000000; j++)
                ar[i*j] = 0;
        }
    //printf("abra ka dabra");
    for(i = 2; i <= 100000000; i++)
    {
        if(ar[i] == 1)
        {
            a2[a] = i;
            a++;

        }
    }
    //printf("abra ka dabra");
}

int main()
{
    //printf("abra ka dabra");
    long long int n, x, y, i, j, ans;
    sieve();
    //printf("abra ka dabra");
    for(i = 1; i < a; i++)
        a2[i] = a2[i] + a2[i - 1];
    scanf("%lld", &n);
    while(n--)
    {
        scanf("%lld %lld", &x, &y);
        ar[0] = 0;
       // printf("%lld %lld", a2[y], a2[x-1]);
        ans = a2[y] - a2[x-1];

        printf("%lld\n", ans);
    }
}
