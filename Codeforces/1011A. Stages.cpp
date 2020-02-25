#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, sum = 0, cnt = 0, prev = 0;
    char f;
    int ar[100] = {0};
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++){
        scanf(" %c", &f);
        ar[f - 'a' + 1]++;
    }
    for(i = 1; i <= 26; i++)
    {
        if(ar[i] > 0)
        {
            if(cnt == 0)
            {
                sum += i;
                prev = i;
                cnt++;
            }
            else if(cnt != 0 && i - prev >= 2)
            {
                sum += i;
                prev = i;
                cnt++;
            }
        }

        if(cnt == k)
            break;
    }
    if(cnt < k)
        printf("-1\n");
    else
        printf("%d\n", sum);
}
