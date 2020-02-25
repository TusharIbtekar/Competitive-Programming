#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    int i, n, m, d, j;
    set<int>s;
    scanf("%d %d", &n, &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &d);
        s.insert(d);
        ar[d]++;
        if(s.size() == n)
        {
            printf("1");
            s.clear();
            for(j = 1; j <= n; j++)
            {
                ar[j]--;
                if(ar[j] > 0)
                    s.insert(j);
            }
        }
        else
        {
            printf("0");
        }
    }
}
