#include<bits/stdc++.h>
using namespace std;
int ar[200005];
int chk[200005];
vector<int>vec1, vec2;
int main()
{
    int i, n, d;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &d);
        chk[d]++;
        ar[i] = d;
    }
    for(i = 0; i < 200005; i++)
    {
        if(chk[i] > 2)
        {
            printf("NO\n");
            return 0;
        }
        else if(chk[i] < 3 && chk[i] > 1)
        {
            vec1.push_back(i);
            vec2.push_back(i);
        }
        else if(chk[i] == 1)
        {
            vec1.push_back(i);
        }
    }
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end(), greater<int>());
    printf("YES\n");
    printf("%d\n", vec1.size());
    for(i = 0; i < vec1.size(); i++)
    {
        printf("%d ", vec1[i]);
    }
    printf("\n%d\n", vec2.size());
    for(i = 0; i < vec2.size(); i++)
    {
        printf("%d ", vec2[i]);
    }
}
