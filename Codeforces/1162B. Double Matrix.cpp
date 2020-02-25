#include<bits/stdc++.h>
using namespace std;
long long int m1[55][55], m2[55][55];
int main()
{
    long long i, j, val, n, m, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    scanf("%lld %lld", &n, &m);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            scanf("%lld", &m1[i][j]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            scanf("%lld", &m2[i][j]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m-1; j++)
        {
            if(m1[i][j] >= m1[i][j+1] || m2[i][j] >= m2[i][j+1])
            {
                if(m1[i][j] < m2[i][j+1] && m2[i][j] < m1[i][j+1])
                {
                    val = m2[i][j];
                    m2[i][j] = m1[i][j];
                    m1[i][j] = val;
                }
                else
                {
                    printf("Impossible\n");
                    return 0;
                }
            }

        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(m1[j][i] >= m1[j+1][i] || m2[j][i] >= m2[j+1][i])
            {
                if(m1[j][i] < m2[j+1][i] && m2[j][i] < m1[j+1][i])
                {
                    val = m2[j][i];
                    m2[j][i] = m1[j][i];
                    m1[j][i] = val;
                }
                else
                {
                    printf("Impossible\n");
                    return 0;
                }
            }
        }
    }
    //check
    /*for(i = 0; i < n; i++)
    {
        for(j = 0; j < m-1; j++)
        {
            if(m1[i][j] == m1[i][j+1])
            {
                //cout << "HELL " << i << " " << j << endl;
                printf("Impossible\n");
                return 0;
            }
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(m1[j][i] >= m1[j+1][i])
            {
                //cout << "HELL";
                //cout << j << i << endl;
                printf("Impossible\n");
                return 0;
            }
        }
    }*/
    /*cout << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            printf("%lld ", m1[i][j]);
        cout << endl;
    }
    cout << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            printf("%lld ", m2[i][j]);
        cout << endl;
    }*/
        printf("Possible\n");
}
