#include<bits/stdc++.h>
using namespace std;

bool flag;
char ar[2001][2001];
int a[2001] = {0};
int n, m, i, j;
int main()
{

    scanf("%d %d", &n, &m);


    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf(" %c", &ar[i][j]);
            if(ar[i][j] == '1'){
                a[j]++;
                //printf("%d\n", j);
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        flag = true;
        for(j = 0; j < m; j++)
        {
            if(ar[i][j] == '1' && a[j] == 1){
                flag = false;
            }
        }
        if(flag)
            break;

    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
}
