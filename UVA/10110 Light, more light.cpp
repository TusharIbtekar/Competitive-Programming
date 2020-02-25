//even no
//odd yes
#include<bits/stdc++.h>
using namespace std;
bitset<10000006>chk;
long long int prime[10000006], a = 1, maxn = 10000000;
void sieve()
{
    long long int i, j;
    chk.reset();
    for(i = 2; i <= sqrt(maxn); i++)
        if(!chk[i])
        {
            for(j = i*i; j <= maxn; j += i)
                chk[j] = 1;
        }
    prime[a] = 2;
    a++;
    for(i = 3; i <= maxn; i += 2)
    {
        if(!chk[i])
        {
            prime[a] = i;
            a++;
        }
    }
}

int main()
{
    sieve();
    long long int n, i, cnt = 0, div = 0, t;
    //scanf("%lld", &t);
    while(1)
    {
        scanf("%lld", &n);
        if(n == 0)
            return 0;
        div = 1;
        for(i = 1; i <= a && prime[i] <= sqrt(n); i++)
        {
            cnt = 1;
            if(n % prime[i] == 0)
            {
                while(n % prime[i] == 0)
                {
                    cnt++;
                    n /= prime[i];
                    if(n == 0 || n == 1)
                    {
                        break;
                    }
                }
                div = div * cnt;
            }
        }
        if(n != 1)
            div = div*2;
        cout << div << endl;
        if(div % 2 == 0)
            printf("no\n");
        else
            printf("yes\n");
    }
}
