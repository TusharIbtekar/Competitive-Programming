#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, t, div, mx, cs = 0;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        div = (m*n)/2;
        if(n == 1 || m == 1)
            mx = n*m;
        else if(n == 2)
        {
            if(m == n)
                mx = m*n;
            else if(m % 2)
            {
                mx = m +1;
            }
            else
            {
                if((m/2) % 2)
                    mx = m+n;
                else
                    mx = (m*n)/2;
            }
        }
        else if(m == 2)
        {
            if(m == n)
                mx = m*n;
            else if(n % 2)
            {
                mx = n +1;
            }
            else
            {
                if((n/2) % 2)
                    mx = m+n;
                else
                    mx = (m*n)/2;
            }
        }
        else
        {
            if(div*2 == m*n)
                mx = div;
            else
                mx = div + 1;
        }
        printf("Case %lld: %lld\n", ++cs, mx);
    }

}
