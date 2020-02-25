#include<bits/stdc++.h>
using namespace std;
int i, d, t, n, k, t1, t2, indx, ans;

int chk[10005], len[10005];
int main()
{
    scanf("%d", &t);
    while(t--)
    {
        k = 0;
        t1 = 0;
        double mn = 999999;
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &d);
            chk[d]++;
            if(chk[d] == 2)
                len[++k] = d;
            if(chk[d] == 4)
                t1 = d;
        }
        if(t1)
            printf("%d %d %d %d\n", t1, t1, t1, t1);
        else
        {
            sort(len+1, len+k+1);

            /*for(i = 0; i <= k; i++)
                cout << len[i] << endl;*/

            double a, b;
            for(i = 1; i <= k; i++)
            {
                a = len[i];
                b = len[i-1];
                //cout << a << " " << b << endl;
                if((a/b)+(b/a) < mn)
                {
                    mn = (a/b)+(b/a);
                    t1 = a, t2 = b;
                }
            }
            printf("%d %d %d %d\n", t1, t1, t2, t2);
        }
        memset(chk, 0, sizeof(chk));
    }

}
